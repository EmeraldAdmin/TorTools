#include <QtGui/QApplication>
#include <QDesktopWidget>
#include <QDir>
#include "tortools.h"

/*Initialize and define class to store variables used by all/multiple threads*/
QString sharedData::directory = "C://Users/";
int sharedData::resX = 800;
int sharedData::resY = 600;
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

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRect screen = QApplication::desktop()->screenGeometry();
    sharedData b;
    b.setResY(screen.height());
    b.setResX(screen.width());
    TorTools w;
    QObject::connect(&w,SIGNAL(closing()),&a,SLOT(quit()));
    w.show();
    return a.exec();
}
sharedData a;
/*The File Monitoring thread. This thread waits for a directory change to do anything.*/
FileMon::FileMon(){
}
QStringList FileMon::getFileList(QString arg){
    QDir dir(arg);
    QStringList files = dir.entryList(QDir::Files,QDir::Time);
    return files;
}
void FileMon::run(){
    emit newDebug("Thread sanity pass.");
    emit newDebug("Watching directory " + a.getDir());
    monitor.addPath(a.getDir());
    QStringList files = getFileList(a.getDir());
    if (!files.isEmpty()){
        QString fullyQ = a.getDir()+"/"+files[0];
        monitor.addPath(fullyQ);
        emit newDebug("Watching most recent file: "+ fullyQ);
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
        QStringList old = monitor.files();
        if (!old.isEmpty()){
            monitor.removePath(old[0]);
        }
        QStringList newFiles = getFileList(a.getDir());
        QString fullyQ = arg + "/" + newFiles[0];
        monitor.addPath(fullyQ);
        emit newDebug("Now watching new file "+newFiles[0]);
    }
}
void FileMon::forceBufferWrite(){
    QDir trash(a.getDir());
    QStringList b = trash.entryList();
}


