#include "tortools.h"
#include <QDebug>

BufferFlushTimed::BufferFlushTimed(QObject *parent, const QString arg, long int timeout): QThread(parent)
{
    dir = arg;
    this->timeout = timeout;
}
BufferFlushTimed::~BufferFlushTimed(){
    }
void BufferFlushTimed::run(){
    file.setFileName(dir);
    qDebug() << file.open(QIODevice::ReadOnly);
    while (sharedData::logging){
        sleep(timeout);
        file.peek(1);
    }
    file.close();
}
