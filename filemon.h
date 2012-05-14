#ifndef FILEMON_H
#define FILEMON_H
#include "tortools.h"
class FileMon : public QThread {
    Q_OBJECT
public:
    FileMon();
    void run();
    bool setconnect(QPushButton *arg, TorTools *arg2);
signals:
    void newDebug(QString buffer);
};
#endif // FILEMON_H
