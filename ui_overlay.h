/********************************************************************************
** Form generated from reading UI file 'overlay.ui'
**
** Created: Thu May 17 16:29:41 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAY_H
#define UI_OVERLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Overlay
{
public:
    QFormLayout *formLayout;
    QLabel *overlayInfo;
    QLabel *overlayTitle;
    QLabel *overlaySumTitle;
    QLabel *sumLine3;
    QLabel *sumLine2;
    QLabel *sumLine1;
    QLabel *overlayLine1;
    QLabel *overlayLine2;
    QLabel *overlayLine3;
    QLabel *OverlayLine4;
    QLabel *overlayLine5;
    QLabel *overlayLine6;
    QLabel *overlayLine7;
    QLabel *overlayLine8;

    void setupUi(QWidget *Overlay)
    {
        if (Overlay->objectName().isEmpty())
            Overlay->setObjectName(QString::fromUtf8("Overlay"));
        Overlay->setWindowModality(Qt::NonModal);
        Overlay->resize(195, 288);
        Overlay->setMinimumSize(QSize(195, 288));
        Overlay->setMaximumSize(QSize(195, 288));
        Overlay->setContextMenuPolicy(Qt::NoContextMenu);
        Overlay->setWindowOpacity(0.2);
        Overlay->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,255);\n"
"color:rgb(255,255,255);"));
        formLayout = new QFormLayout(Overlay);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        overlayInfo = new QLabel(Overlay);
        overlayInfo->setObjectName(QString::fromUtf8("overlayInfo"));
        overlayInfo->setStyleSheet(QString::fromUtf8(""));
        overlayInfo->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::SpanningRole, overlayInfo);

        overlayTitle = new QLabel(Overlay);
        overlayTitle->setObjectName(QString::fromUtf8("overlayTitle"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        overlayTitle->setFont(font);
        overlayTitle->setStyleSheet(QString::fromUtf8(""));
        overlayTitle->setAlignment(Qt::AlignCenter);
        overlayTitle->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout->setWidget(0, QFormLayout::SpanningRole, overlayTitle);

        overlaySumTitle = new QLabel(Overlay);
        overlaySumTitle->setObjectName(QString::fromUtf8("overlaySumTitle"));
        overlaySumTitle->setFont(font);
        overlaySumTitle->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(11, QFormLayout::SpanningRole, overlaySumTitle);

        sumLine3 = new QLabel(Overlay);
        sumLine3->setObjectName(QString::fromUtf8("sumLine3"));

        formLayout->setWidget(14, QFormLayout::SpanningRole, sumLine3);

        sumLine2 = new QLabel(Overlay);
        sumLine2->setObjectName(QString::fromUtf8("sumLine2"));

        formLayout->setWidget(13, QFormLayout::SpanningRole, sumLine2);

        sumLine1 = new QLabel(Overlay);
        sumLine1->setObjectName(QString::fromUtf8("sumLine1"));

        formLayout->setWidget(12, QFormLayout::SpanningRole, sumLine1);

        overlayLine1 = new QLabel(Overlay);
        overlayLine1->setObjectName(QString::fromUtf8("overlayLine1"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, overlayLine1);

        overlayLine2 = new QLabel(Overlay);
        overlayLine2->setObjectName(QString::fromUtf8("overlayLine2"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, overlayLine2);

        overlayLine3 = new QLabel(Overlay);
        overlayLine3->setObjectName(QString::fromUtf8("overlayLine3"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, overlayLine3);

        OverlayLine4 = new QLabel(Overlay);
        OverlayLine4->setObjectName(QString::fromUtf8("OverlayLine4"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, OverlayLine4);

        overlayLine5 = new QLabel(Overlay);
        overlayLine5->setObjectName(QString::fromUtf8("overlayLine5"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, overlayLine5);

        overlayLine6 = new QLabel(Overlay);
        overlayLine6->setObjectName(QString::fromUtf8("overlayLine6"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, overlayLine6);

        overlayLine7 = new QLabel(Overlay);
        overlayLine7->setObjectName(QString::fromUtf8("overlayLine7"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, overlayLine7);

        overlayLine8 = new QLabel(Overlay);
        overlayLine8->setObjectName(QString::fromUtf8("overlayLine8"));

        formLayout->setWidget(9, QFormLayout::SpanningRole, overlayLine8);


        retranslateUi(Overlay);

        QMetaObject::connectSlotsByName(Overlay);
    } // setupUi

    void retranslateUi(QWidget *Overlay)
    {
        Overlay->setWindowTitle(QApplication::translate("Overlay", "TorTools Game Overlay", 0, QApplication::UnicodeUTF8));
        overlayInfo->setText(QApplication::translate("Overlay", "Showing DPS", 0, QApplication::UnicodeUTF8));
        overlayTitle->setText(QApplication::translate("Overlay", "Tor Tools Combat Stats", 0, QApplication::UnicodeUTF8));
        overlaySumTitle->setText(QApplication::translate("Overlay", "Tor Tools LFG ", 0, QApplication::UnicodeUTF8));
        sumLine3->setText(QApplication::translate("Overlay", "MatchingPlayerThree", 0, QApplication::UnicodeUTF8));
        sumLine2->setText(QApplication::translate("Overlay", "MatchingPlayerTwo", 0, QApplication::UnicodeUTF8));
        sumLine1->setText(QApplication::translate("Overlay", "MatchingPlayerOne", 0, QApplication::UnicodeUTF8));
        overlayLine1->setText(QApplication::translate("Overlay", "1) PlayerNameOne", 0, QApplication::UnicodeUTF8));
        overlayLine2->setText(QApplication::translate("Overlay", "2) PlayerNameTwo", 0, QApplication::UnicodeUTF8));
        overlayLine3->setText(QApplication::translate("Overlay", "3) PlayerNameThree", 0, QApplication::UnicodeUTF8));
        OverlayLine4->setText(QApplication::translate("Overlay", "4) PlayerNameFour", 0, QApplication::UnicodeUTF8));
        overlayLine5->setText(QApplication::translate("Overlay", "5) PlayerNameFive", 0, QApplication::UnicodeUTF8));
        overlayLine6->setText(QApplication::translate("Overlay", "6) PlayerNameSix", 0, QApplication::UnicodeUTF8));
        overlayLine7->setText(QApplication::translate("Overlay", "7) PlayerNameSeven", 0, QApplication::UnicodeUTF8));
        overlayLine8->setText(QApplication::translate("Overlay", "8) PlayerNameEight", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Overlay: public Ui_Overlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAY_H
