#include <QtGui/QApplication>
#include <QFileSystemWatcher>
#include <QDesktopWidget>
#include <QStringList>
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

/*The File Monitoring thread. This thread waits for a directory change to do anything.*/
FileMon::FileMon(){
}
void FileMon::run(){
    sharedData a;
    emit newDebug("Thread sanity pass.");
    emit newDebug("Watching directory " + a.getDir());
    QFileSystemWatcher monitor;
    /*monitor.addPath(a.getDir());*/
    monitor.addPath(a.getDir());
    QDir dir(a.getDir());
    QStringList files = dir.entryList(QDir::Files,QDir::Time);
    if (!files.isEmpty()){
        QString fullyQ = a.getDir()+"/"+files[0];
        monitor.addPath(fullyQ);
        emit newDebug("Watching most recent file: "+ fullyQ);
    }
    else {
        emit newDebug("Directory is empty. This is currently unhandled. Monitoring will not function correctly.");
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
}



