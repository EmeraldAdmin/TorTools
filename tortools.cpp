#include "tortools.h"
#include "ui_tortools.h"
#include "overlay.h"
#include "helpwindow.h"
#include <QFileDialog>
#include <QObject>
#include <QSettings>
#include <QDir>
#include <QStringList>
#include <QMessageBox>
#include <QDesktopServices>
#include <QValidator>
#include <QRegExp>
#define BTOQ(B) B ? (QString)"True" : (QString)"False"

/*Global variables used in the Tor Tools class*/
QSettings settings("EmeralDev","TorTools");
sharedData config;
FileMon *monitor;
Overlay *screen;
QString version = "Version: 0.3.0a.WIN32.PRELAUNCH\nRelease date: 05/15/2012\n\nMore Info Available At\nhttp://emeraldev.com";

/*Methods used by entire source file*/
void TorTools::enableOverlay(){
    screen = new Overlay();
    QObject::connect(this,SIGNAL(updateInfoLine(QString)),screen,SLOT(updateOverlayInfo(QString)));
    screen->show();
    screen->move(settings.value("Overlay/xpos",40).toInt(),settings.value("Overlay/ypos",0).toInt());
    ui->tabs->insertTab(3,ui->overlayTab,"Overlay");
    config.setOverlay(true);
    debug("Overlay turned on at ",QString("%1,%2").arg(screen->x()).arg(screen->y()));
    ui->actionLaunch_Overlay->setChecked(true);
    ui->overlayB->setText("Turn Off Overlay");
}
void TorTools::disableOverlay(){
    screen->hide();
    delete screen;
    ui->tabs->removeTab(3);
    config.setOverlay(false);
    debug("Overlay turned off.");
    ui->actionLaunch_Overlay->setChecked(false);
    ui->overlayB->setText("Turn On Overlay");
}
        /*Constructor/Destructor*/

TorTools::TorTools(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TorTools)
{
    ui->setupUi(this);
    if (settings.value("firstrun","True") == "True"){
        settings.setValue("firstrun","false");
        HelpWindow *help = new HelpWindow();
        help->exec();
        delete help;
    }
    this->show();
    /*load the settings from the last session, if any*/
    ui->cAutoStart->setChecked(settings.value("CombatLog/autostart","false").toBool());
    ui->groupBool->setChecked(settings.value("CombatLog/groupstats","false").toBool());
    ui->fileCounter->setValue(settings.value("CombatLog/filecounter",0).toInt());
    ui->logDir->setText(settings.value("CombatLog/directory","C://Users/").toString());
    config.setDir(ui->logDir->text());
    /*write the resolution to overlay tab*/
    ui->resX->setText(QString("%1").arg(config.getResX()));
    ui->ResY->setText(QString("%1").arg(config.getResY()));
    /*Destroy overlay tab until overlay is drawn*/
    ui->tabs->removeTab(3);
    /*Launch combat logging if auto start is enabled*/
    if (ui->cAutoStart->isChecked()){
        QTimer::singleShot(500,this,SLOT(on_ToggleLog_clicked()));
    }
    /*Attempt to auto determine characters*/
    QDir profiles = QDir::homePath()+"/AppData/local/swtor/swtor/settings/GUIProfiles";
    QStringList files = profiles.entryList();
    if (!files.isEmpty()){
        foreach(QString file,files){
            QString name = file;
            int index = name.indexOf(" ");
            if (index != -1){
                name = name.remove(index,50);
                if (settings.value("Characters/"+name+"/status","default").toString() == "default"){
                    settings.beginGroup("Characters/"+name);
                    settings.setValue("status","autodetect");
                    settings.endGroup();
                }
            }
        }
    }
    /*Fill in the Character options on the account page*/
    settings.beginGroup("Characters");
    QStringList chars = settings.childGroups();
    settings.endGroup();
    if (!chars.isEmpty()){
        foreach(QString name,chars){
            ui->charList->addItem(name);
        }
    }
}

TorTools::~TorTools()
{
    if (config.getOverlay()){
        screen->hide();
        delete screen;
    }
    emit(closing());
    delete ui;
}

/*Class slots begin*/
void TorTools::on_browseB_clicked()
{
    config.setDir(QFileDialog::getExistingDirectory(this,"Log Directory",QDir::homePath()));
    ui->logDir->setText(config.getDir());
    settings.setValue("CombatLog/directory",config.getDir());
    debug("Changed watched directory.");
}

void TorTools::on_actionClose_triggered()
{
    emit(closing());
}
void TorTools::debug(QString arg){
    ui->debugWindow->appendPlainText(arg);
    settings.setValue("LastDebug",arg);
}
void TorTools::onNewDebug(QString arg){
    debug(arg);
}

void TorTools::debug(QString arg1,QString arg2){
    QString temp = arg1 + arg2;
    ui->debugWindow->appendPlainText((temp));
    settings.setValue("LastDebug",temp);
}
void TorTools::on_ToggleLog_clicked()
{
    QString toStatus = ui->ToggleLog->text();
    if (toStatus == "Turn On Combat Logging"){
        this->debug("Toggled On Combat Logging");
        ui->ToggleLog->setText("Turn Off Combat Logging");
        /*get applicable log settings to send to server*/
        bool group = ui->groupBool->isChecked();
        bool autog = ui->autoGroup->isChecked();
        bool mangr = ui->manGroup->isChecked();
        this->debug("Contribute to group pool: ",BTOQ(group));
        this->debug("Auto Group Find: ",BTOQ(autog));
        this->debug("Manual Group: ",BTOQ(mangr));
        this->debug("Starting Threads...");
        sharedData::logging = true;
        monitor = new FileMon();
        /*Set priority of monitoring thread to lower than average, allowing game more cpu time*/
        bool result = monitor->setconnect(ui->ToggleLog,this);
        if (result){
            monitor->start();
            monitor->setPriority(QThread::LowPriority);
            this->debug("Connections Made.");
        }
        else {
            this->debug("Failed to connect. Not launching monitor.");
        }

    }
    if (toStatus == "Turn Off Combat Logging"){
        this->debug("Toggled Off Combat Logging");
        ui->ToggleLog->setText("Turn On Combat Logging");
        delete monitor;
        this->debug("Garbage Collected thread data.");
        sharedData::logging = false;
    }
}

void TorTools::on_directory_change(QString arg){
    debug(arg, " changed");
    QDir dir(config.getDir());
    QStringList files = dir.entryList(QDir::Files,QDir::Time);
    if (config.getOverlay()){
        emit updateInfoLine("Log Change Detected");
    }
    /*Will send file to server once server side system setup*/
}

void TorTools::on_cAutoStart_clicked()
{
    settings.setValue("CombatLog/autostart",ui->cAutoStart->isChecked());
    debug("Saved Combat Logging on Startup value to registry.");
}

void TorTools::on_groupBool_clicked()
{
    settings.setValue("CombatLog/groupstats",ui->groupBool->isChecked());
    debug("Saved group stat pool value to registry.");
}

void TorTools::on_fileCounter_valueChanged(int arg1)
{
    settings.setValue("CombatLog/filecounter",arg1);
    debug("Saved file counter value to registry");
}

void TorTools::on_actionVersion_Info_triggered()
{
    QMessageBox versionBox;
    versionBox.setText("<HTML><Font size=4><b>Tor Tools Version Info</font></b></html>");
    versionBox.setInformativeText(version);
    versionBox.exec();
}

void TorTools::on_actionWebsite_triggered()
{
    if (QDesktopServices::openUrl(QUrl("http://emeraldev.com"))){
        debug("Successfully launched external program: Web Browser");
    }
    else {
        debug("Failed to launch external program: Web Browser");
    }
}

void TorTools::on_actionLaunch_Overlay_triggered()
{
    if (!config.getOverlay()){
        enableOverlay();
    }
    else {
        disableOverlay();
    }
}

void TorTools::on_updateOverlay_clicked()
{
    if (config.getOverlay()){
        int hPos = ui->horizontalSlider->sliderPosition();
        int vPos = ui->verticalSlider->sliderPosition();
        hPos = hPos * (config.getResX()/100);
        vPos = vPos * (config.getResY()/100);
        screen->move(hPos,vPos);
        debug("Updated overlay position to ",QString("%1,%2").arg(screen->x()).arg(screen->y()));
    }
}

void TorTools::on_actionSave_Overlay_Position_triggered()
{
    if (config.getOverlay()){
        settings.setValue("Overlay/xpos",screen->x());
        settings.setValue("Overlay/ypos",screen->y());
        debug("Saved overlay position to registry.");
    }
    else {
        debug("Overlay not running. Can't save position.");
    }
}

void TorTools::on_overlayB_clicked()
{
    if (!config.getOverlay()){
        enableOverlay();
    }
    else {
        disableOverlay();
    }
}

void TorTools::on_actionDocumentation_triggered()
{
    HelpWindow *help = new HelpWindow();
    help->exec();
    /*help is a modal, dialog window. Execution in this function will pause until window is closed.
    That way, memory can safely be deleted after creation.*/
    delete help;
}

void TorTools::on_username_textEdited(const QString &arg1)
{
    int length = arg1.length() -1;
    QString temp = arg1;
    QString inchar = temp.remove(0,length);
    QRegExpValidator validate(QRegExp("[a-zA-Z]+([a-zA-Z0-9])*"));
    int pos = arg1.length();
    temp = arg1;
    if (validate.validate(temp, pos) == QValidator::Acceptable){
        debug("Valid character input: "+inchar);
    }
    else {
        debug("Invalid character input :"+inchar);
        ui->username->setText(temp.remove(-1,1));
        /*Make sure the string still is valid; i.e, no more than one character was input at once.*/
        temp = ui->username->text();
        pos = temp.length();
        while (validate.validate(temp, pos) == QValidator::Invalid){
            ui->username->setText(temp.remove(-1,1));
            temp = ui->username->text();
            pos = temp.length();
        }
    }
}
