#ifndef TORTOOLS_H
#define TORTOOLS_H

#include <QMainWindow>
#include <qthread.h>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QFileSystemWatcher>
#include <QStringList>
#include <QFile>
#include <windows.h>
#include <QDir>
#include <QUrl>

namespace Ui {
class TorTools;
}

class TorTools : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TorTools(QWidget *parent = 0);
    ~TorTools();
    void debug(QString arg);
    void debug(QString arg, QString blarg);
    void setDebugBuffer(QString arg);
    void enableOverlay();
    void disableOverlay();
signals:
    void closing();
    void updateInfoLine(QString arg);
private slots:
    void on_browseB_clicked();

    void on_actionClose_triggered();

    void on_ToggleLog_clicked();

    void onNewDebug(QString arg);

    void on_cAutoStart_clicked();

    void on_groupBool_clicked();

    void on_fileCounter_valueChanged(int arg1);

    void on_directory_change(QString arg);

    void on_actionVersion_Info_triggered();

    void on_actionWebsite_triggered();

    void on_actionLaunch_Overlay_triggered();

    void on_updateOverlay_clicked();

    void on_actionSave_Overlay_Position_triggered();

    void on_overlayB_clicked();

    void on_actionDocumentation_triggered();

    void on_username_textEdited(const QString &arg1);

    void on_dockWidget_topLevelChanged(bool topLevel);

private:
    Ui::TorTools *ui;
    bool winEvent(MSG *message, long *result);
};

class FileMon : public QThread {
    Q_OBJECT
public:
    FileMon();
    void run();
    bool setconnect(QPushButton *arg, TorTools *arg2);
    QFileSystemWatcher monitor;
    QStringList getFileList(QString arg);
    void watchFile(const QString arg);
signals:
    void newDebug(QString buffer);
    void sendNotify(QString);
private slots:
    void change_notify(QString arg);
};
class sharedData{
    static QString directory;
    static int resX;
    static int resY;
    static bool overlay;
    static QString flushFile;
public:
    QString getDir();
    void setDir(QString);
    int getResX();
    int getResY();
    void setResX(int arg);
    void setResY(int arg);
    void setOverlay(bool);
    bool getOverlay();
    void setFile(QString arg);
    QString getFile();
    static bool logging;
};
class BufferFlushTimed : public QThread {
    Q_OBJECT
public:
    BufferFlushTimed(QObject *parent,const QString arg,long int timeout);
    ~BufferFlushTimed();
    void run();
private:
    QFile file;
    long int timeout;
    QString dir;
};

#endif // TORTOOLS_H
