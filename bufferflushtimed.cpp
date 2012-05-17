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
    while (sharedData::logging){
        sleep(timeout);
        file.open(QIODevice::ReadOnly);
        file.peek(1);
        file.close();
    }
}
