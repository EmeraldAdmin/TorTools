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
