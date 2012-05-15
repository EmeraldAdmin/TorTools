/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created: Mon May 14 22:59:04 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLayout>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpWindow
{
public:
    QToolBox *helpWindow;
    QWidget *page;
    QTextEdit *textEdit;
    QWidget *page_2;
    QTextEdit *textEdit_2;
    QWidget *page_3;
    QTextEdit *textEdit_3;
    QWidget *page_4;
    QPlainTextEdit *plainTextEdit;
    QWidget *page_5;
    QTextEdit *textEdit_4;
    QPushButton *closeHelp;
    QLabel *label;

    void setupUi(QWidget *HelpWindow)
    {
        if (HelpWindow->objectName().isEmpty())
            HelpWindow->setObjectName(QString::fromUtf8("HelpWindow"));
        HelpWindow->setWindowModality(Qt::ApplicationModal);
        HelpWindow->resize(595, 356);
        HelpWindow->setMinimumSize(QSize(595, 356));
        HelpWindow->setMaximumSize(QSize(595, 356));
        helpWindow = new QToolBox(HelpWindow);
        helpWindow->setObjectName(QString::fromUtf8("helpWindow"));
        helpWindow->setGeometry(QRect(0, 0, 591, 331));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 591, 226));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 591, 221));
        helpWindow->addItem(page, QString::fromUtf8("Welcome"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 591, 226));
        textEdit_2 = new QTextEdit(page_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 0, 591, 221));
        helpWindow->addItem(page_2, QString::fromUtf8("Control Tab"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 591, 226));
        textEdit_3 = new QTextEdit(page_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(0, 0, 591, 221));
        helpWindow->addItem(page_3, QString::fromUtf8("Account Tab"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 591, 226));
        plainTextEdit = new QPlainTextEdit(page_4);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 591, 221));
        helpWindow->addItem(page_4, QString::fromUtf8("Results Tab"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 591, 226));
        textEdit_4 = new QTextEdit(page_5);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(0, 0, 591, 221));
        helpWindow->addItem(page_5, QString::fromUtf8("Overlay Tab"));
        closeHelp = new QPushButton(HelpWindow);
        closeHelp->setObjectName(QString::fromUtf8("closeHelp"));
        closeHelp->setGeometry(QRect(510, 330, 75, 23));
        label = new QLabel(HelpWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 330, 391, 31));

        retranslateUi(HelpWindow);

        helpWindow->setCurrentIndex(4);
        helpWindow->layout()->setSpacing(0);


        QMetaObject::connectSlotsByName(HelpWindow);
    } // setupUi

    void retranslateUi(QWidget *HelpWindow)
    {
        HelpWindow->setWindowTitle(QApplication::translate("HelpWindow", "Tor Tools Documentation", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("HelpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Welcome to TorTools</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This documentation will help you get started.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">If you'd rather dive right in, just close this window.</span></p>\n"
"<p"
                        " align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">What is Tor Tools? </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Tor Tools is software to augment the game Star Wars - The Old Republic (SW:TOR or just TOR). It seeks out to do this by supplying two oft wanted features that BioWare, the developer of TOR, has yet to implement themselves: a combat statistics system, and a looking for group tool.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Unlike many other MMOs, SW:TOR does not currently offer a built in API for developing game addons, or even external API support for various tasks like account validation. As a result, this program is limited by the functionality provided by BioWare.  Details on these limitations will be discussed in the appropriate context.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Combat Statistics</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">TorTools has "
                        "a multistep approach to determining and serving combat statistics to you. This approach starts with monitoring your filesystem for changes to the directory where TOR writes its log files. In order for log files to be successfully retreived, combat logs must be enabled in game. After logging is enabled in game, the control scheme for monitoring the directory must be set up and enabled. See the &quot;Control Tab&quot; section for more information on this process.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The limitation that will arise here is that TOR does not write the log to file after every encounter, nor to any discernable time table. So, updates to the statistics may well lag far behind actual combat times. This is"
                        " a limitation imposed by BioWare. If you want to see statistics manually, you may force the game to write to file by temporarily disabling and then reenabling combat logging in game.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">After a change is detected, the system then sends this file to a server that processes it, and generates both a webpage, viewable in the &quot;results&quot; tab, and reply to this client, which displays in the game overlay as designated in the Overlay tab. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The statistics reported include DPS (damage per second), total damage done over the encounter, damage taken, threat generated over the entire encounter, threat per second, healing done over the entire encounter, healing per second, and several other statistics. If selected, you may also see statistics comparing your numbers to those of a group you are in.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Looking For Group (LFG) Tool</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weigh"
                        "t:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This feature is planned and coming soon. Check back for updates.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        helpWindow->setItemText(helpWindow->indexOf(page), QApplication::translate("HelpWindow", "Welcome", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("HelpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">The Control Tab</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Purpose:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The purpose of the control tab is to have controls typically needed during game play available on one screen. Other, more advanced or static settings may appear on other tabs, but most things changed 'on the fly' will appear here.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Itemized Breakdown:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px; font-size:10pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Turn On/Turn Off Buttons</span><span style=\" font-size:10pt;\">: These buttons facillitate one-click enabling and disabling of the main features of Tor Tools: combat logging (and all of its attached functions), looking for group, and the overlay.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Combat Log Directory: </span><span style=\" font-size:10pt;\">This specifies which directory Tor Tools is going to watch for combat log changes from TOR. In most cases, this directory is My Docume"
                        "nts/Star Wars - The Old Republic/CombatLogs/</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Number of Logs Before Deletion</span><span style=\" font-size:10pt;\">: Because BioWare does not have any way in the game to delete old combat logs, and constant logging can produce a large number of them, Tor Tools will delete logs, oldest first, beyond the number specified here. If you do not want Tor Tools to delete logs, set the value to zero.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Start Combat Loggin when TorTools starts</span><span style=\" font-size:10pt;\">: checking this box means that monitoring of the log file and all other combat statistics features will start with the Tor Tools application.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Contribute to Group Stats: </span><span style=\" font-size:10pt;\">When this is checked, your combat stats will be pooled with others' on your server. The automated and manual grouping features will report your stats with the appropriate groups. Turning it off makes your statistics viewable to only you. You will not be pooled or grouped with others.</spa"
                        "n></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Automatically Determine Group:</span><span style=\" font-size:10pt;\"> when this is checked, the server will attempt to determine who your group mates are without any further input from you. Note that this is a convenience feature and when reasonable, the manual group system should be used instead.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Group Me Wi"
                        "th These Players: </span><span style=\" font-size:10pt;\">This allows you to explicitly state the members of your in-game party or operation, allowing more accurate statistics reporting than with automatic detection. Note that members must have TorTools installed, running, and have Contribute to Group Stats checked.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Group Finder Settings - Feature Coming Soon</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        helpWindow->setItemText(helpWindow->indexOf(page_2), QApplication::translate("HelpWindow", "Control Tab", 0, QApplication::UnicodeUTF8));
        textEdit_3->setHtml(QApplication::translate("HelpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Account Tab</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The account tab should require very few changes under normal use. Most users will have a single log in sess"
                        "ion; once this login is complete, Tor Tools will remember it indefinitely.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The account tab serves as a place to manage less mutable or less important details, typically associated with the LFG tool. While both the LFG tool and the combat statistics portion of TorTools require a login, only LFG requires character information. Note, however, that it is possible that accurate character information may lead to faster or more accurate results in some cases.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Itemized Breakdown</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">First (Primary) Line: </span><span style=\" font-size:10pt;\">The first line, with the </span><span style=\" font-size:10pt; font-style:italic;\">username</span><span style=\" font-size:10pt;\">, </span><span style=\" font-size:10pt; font-style:italic;\">password</span><span style=\" font-size:10pt;\"> and </span><span style=\" font-size:10pt; font-style:italic;\">server</span><span style=\" font-size:10pt;\"> fields are required for ALL Tor Tools services. Use"
                        "rname and password need only be entered once. Server must only be changed when you change which server you are playing on. Note: you do not have to relog in after changing servers.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Ignore List:</span><span style=\" font-size:10pt;\"> The ignore list is for more specific managing of who can and cannot see your data or get grouped with you. Names on your ignore list will never be able to see statistics from you, even if the grouping system would normally pool you with them.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Current Character Info:</span><span style=\" font-size:10pt;\"> The LFG tool requires you to have a current character loaded. Both the name and level fields must be properly filled out. Note: TorTools will attempt to acquire your character names each time it starts. In most cases, you will only have to modify the level, role and class fields. They will be stored for future loads. If your character does not meet the level requirements for what it is seeking a group, it will be rejected from the pool. </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        helpWindow->setItemText(helpWindow->indexOf(page_3), QApplication::translate("HelpWindow", "Account Tab", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("HelpWindow", "This tab is still in development. No functionality exists yet.", 0, QApplication::UnicodeUTF8));
        helpWindow->setItemText(helpWindow->indexOf(page_4), QApplication::translate("HelpWindow", "Results Tab", 0, QApplication::UnicodeUTF8));
        textEdit_4->setHtml(QApplication::translate("HelpWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Overlay Settings</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The overlay is a translucent (20% opaque) overlay that can sit over the game in any desired position t"
                        "o report data during game play, without requiring a second monitor or regular alt-tabbing. What information it displays, and how it displays it, is configured in this tab.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Note that the overlay tab does not exist until the overlay is enabled.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Moving the Overlay:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; m"
                        "argin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The overlay can be moved by using the two slide bars in the overlay tab. The sliders have 100 positions, representing percentage of your total screen resolution. So, to move the overlay to the top, move the Vertical slider to the top. To center the overlay horizontally, move the Horizontal slider to the middle. Once you have the overlay positioned where you want it, press Update to redraw the overlay on screen.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Saving the Overlay's position for next time</span><span style=\" font-size:10pt;\">:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">You can save the current position of the overlay so it opens in the same location when you restart Tor Tools. To do so, select Save Overlay Position from the Tor Tools drop down menu, or press Control+S while the Tor Tools main window (not the overlay) is selected.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Configuring the Overlay's Information</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-"
                        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The overlay can be configured to display a lot of different information sorted in different ways. It can also be configured to show real time, or delayed statistics. This time setting is for combat log exclusively. Looking for Group does not require or inquire this setting.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Real-Time Statistics</span><span style=\" font-size:10pt;\"> will poll the server roughly every 3 seconds (two global cooldowns) for piecewise information that it sums and presents until the end of combat is reached. Note that in order for other party members to be shown "
                        "with your statistics, they must also have real time selected. Real time statistics uses significantly more system resources, and thus may reduce game performance on slower systems.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-style:italic;\">Delayed Statistics</span><span style=\" font-size:10pt;\"> is primarily selected to decrease system resource consumption, or for users who don't wish to have statistics changing on their screen during combat. Note that all party members must have delayed statistics selected to be grouped together.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        helpWindow->setItemText(helpWindow->indexOf(page_5), QApplication::translate("HelpWindow", "Overlay Tab", 0, QApplication::UnicodeUTF8));
        closeHelp->setText(QApplication::translate("HelpWindow", "Continue", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HelpWindow", "This documentation can be viewed at any time from the Help menu.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpWindow: public Ui_HelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
