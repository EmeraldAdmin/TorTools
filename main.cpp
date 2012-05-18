#include <QtGui/QApplication>
#include <QDesktopWidget>
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
