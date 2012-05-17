#ifndef OVERLAY_H
#define OVERLAY_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Overlay;
}

class Overlay : public QWidget
{
    Q_OBJECT
    
public:
    explicit Overlay(QWidget *parent = 0);
    ~Overlay();
private slots:
    void updateOverlayInfo(QString arg);
    void restoreOverlayInfo();
    
private:
    Ui::Overlay *ui;
};

#endif // OVERLAY_H
