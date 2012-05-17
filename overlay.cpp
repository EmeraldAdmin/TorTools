#include "overlay.h"
#include "ui_overlay.h"

Overlay::Overlay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Overlay)
{
    setAttribute(Qt::WA_TransparentForMouseEvents);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    ui->setupUi(this);
}

Overlay::~Overlay()
{
    delete ui;
}
void Overlay::updateOverlayInfo(QString arg){
    ui->overlayInfo->setText(arg);
    this->update();
    QTimer::singleShot(3000,this,SLOT(restoreOverlayInfo()));
}
void Overlay::restoreOverlayInfo(){
    ui->overlayInfo->setText("Showing DPS");
    this->update();
}
