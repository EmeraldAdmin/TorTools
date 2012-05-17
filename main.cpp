#include <QtGui/QApplication>
#include <QDesktopWidget>
#include <QDir>
#include <QTimer>
#include "tortools.h"

/*Initialize and define class to store variables used by all/multiple threads*/
QString sharedData::directory = "C://Users/";
int sharedData::resX = 800;
int sharedData::resY = 600;
QString sharedData::flushFile = "";
/*Initialize overlay tracker to false (overlay not shown at launch)*/
bool sharedData::overlay = false;
QString sharedData::getDir(){return directory;}
void sharedData::setDir(QString arg){directory = arg;}
int sharedData::getResX(){return resX;}
int sharedData::getResY(){return resY;}
void sharedData::setResX(int arg){resX = arg;}
void sharedData::setResY(int arg){resY = arg;}
void sharedData::setOverlay(bool arg){overlay = arg;}
bool sharedData::getOverlay(){return overlay;}
bool sharedData::logging = false;
void sharedData::setFile(QString arg){flushFile = arg;}
QString sharedData::getFile(){return flushFile;}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRect screen = QApplication::desktop()->screenGeometry();
    sharedData b;
    b.setResY(screen.height());
    b.setResX(screen.width());
    TorTools w;
    QObject::connect(&w,SIGNAL(closing()),&a,SLOT(quit()));
    return a.exec();
}
//Instance of static data class for cross-thread, non-signal based communication
sharedData a;

/*The File Monitoring thread. This thread waits for a directory change to do anything.*/
FileMon::FileMon(){}
QStringList FileMon::getFileList(QString arg){
    QDir dir(arg);
    QStringList files = dir.entryList(QDir::Files,QDir::Time);
    return files;
}
void FileMon::run(){
    emit newDebug("Thread started successfully. Working dir: "+a.getDir());
    monitor.addPath(a.getDir());
    QStringList files = getFileList(a.getDir());
    if (!files.isEmpty()){
        const QString fullyQ = a.getDir();
        emit newDebug("Watching most recent file: " + files[0]);
        a.setFile(fullyQ + "\\" + files[0]);
        BufferFlushTimed buffF(0,a.getFile(),2);
        buffF.start();
        watchFile(fullyQ);
    }
    else {
        emit newDebug("Directory is empty. Will add new file watcher when file is added.");
    }
    QObject::connect(&monitor,SIGNAL(directoryChanged(QString)),SLOT(change_notify(QString)));
    QObject::connect(&monitor,SIGNAL(fileChanged(QString)),SLOT(change_notify(QString)));
    exec();
}
bool FileMon::setconnect(QPushButton *arg,TorTools *arg2){
    bool result = QObject::connect(arg,SIGNAL(clicked()),this,SLOT(terminate()));
    if (result){result = QObject::connect(this,SIGNAL(newDebug(QString)),arg2,SLOT(onNewDebug(QString)));}
    if (result){result = QObject::connect(this,SIGNAL(sendNotify(QString)),arg2,SLOT(on_directory_change(QString)));}
    return result;
}
void FileMon::change_notify(QString arg){
    emit sendNotify(arg);
    /*This checks to see if a new file was added, or if the currently watched file was changed.
      if a new file was added, it removes the old one (if any) and replaces it with the new one.*/
    if (arg == a.getDir()){
        QStringList newFiles = getFileList(a.getDir());
        emit newDebug("Now watching new file "+newFiles[0]);
        const QString fullyQ = a.getDir();
        a.setFile(fullyQ + "\\" + newFiles[0]);
        BufferFlushTimed buffF(0,a.getFile(),2);
        buffF.start();
        watchFile(fullyQ);
    }
}
void FileMon::watchFile(const QString arg){
    HANDLE changeNotifications[2];
    DWORD waitStatus;
    bool fileAdded = false;
    //detect changes to watched file size, signifying write
    changeNotifications[0] = FindFirstChangeNotification((const wchar_t*)arg.utf16(),false,FILE_NOTIFY_CHANGE_SIZE);
    //detect changes to the directory (file added) to signify new file to watch
    changeNotifications[1] = FindFirstChangeNotification((const wchar_t*)arg.utf16(),false,FILE_NOTIFY_CHANGE_FILE_NAME);
    if (changeNotifications[0] == INVALID_HANDLE_VALUE
            || changeNotifications[1] == INVALID_HANDLE_VALUE){
        emit newDebug("Error: Invalid file handle.");
    }
    else if (changeNotifications[0] == NULL
             || changeNotifications[1] == NULL){
        emit newDebug("Error: Unexpected NULL handle.");
    }
    //start waiting in infinite loop. Thread is terminated when logging turned off, will kill loop forcibly.
    //bad form? Perhaps. But, this thread makes no actual changes to files or data inside loop.
    else {
        emit newDebug("Now starting API FS watch.");
        while (!fileAdded){
            waitStatus = WaitForMultipleObjects(2,changeNotifications,false,INFINITE);
            switch (waitStatus)
            {
                case WAIT_OBJECT_0:
                    //watched file was written to
                    emit newDebug("Watched File Changed!");
                    if (!FindNextChangeNotification(changeNotifications[0])){
                        emit newDebug("Unexpected error when attempting to continue file monitoring.");
                    }
                    break;
                case WAIT_OBJECT_0 + 1:
                    //File added to directory
                    fileAdded = true;
                    break;
            }
        }
    }
}
