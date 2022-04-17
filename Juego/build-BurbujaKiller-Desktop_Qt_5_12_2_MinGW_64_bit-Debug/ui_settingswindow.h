/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_11;
    QPushButton *pushButton_4;
    QLabel *label_12;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(850, 550);
        SettingsWindow->setMinimumSize(QSize(850, 550));
        SettingsWindow->setMaximumSize(QSize(850, 550));
        centralwidget = new QWidget(SettingsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(11, 11, 828, 503));
        frame->setStyleSheet(QString::fromUtf8("background-color: #101010"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(730, 20, 71, 71));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/back icon.png);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(570, 210, 291, 261));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/teclas.png);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 220, 171, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe Script\";\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 370, 171, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe Script\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 10, 321, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Segoe Script\";\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 60, 351, 351));
        QFont font;
        font.setPointSize(6);
        font.setBold(false);
        font.setItalic(false);
        label_5->setFont(font);
        label_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_5->setStyleSheet(QString::fromUtf8("font: 75 6pt \"Segoe Script\";"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(430, 280, 31, 31));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/player1.png);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 270, 91, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe Script\";\n"
"color:rgb(170, 170, 0)"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 420, 31, 31));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/player2.png);"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(470, 410, 91, 51));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe Script\";\n"
"color: rgb(255, 170, 0)"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(430, 130, 191, 51));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe Script\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(16, 16, 16);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 110, 71, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/control icon.png);\n"
"image: url(:/Imagenes/control icon.png);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 410, 41, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/vida++.png);"));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(130, 410, 171, 41));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe Script\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 450, 41, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/potenciador.png);"));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 450, 221, 41));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Segoe Script\";\n"
"color: rgb(255, 255, 255);"));
        SettingsWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SettingsWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SettingsWindow->setStatusBar(statusbar);

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "HOOK HIT", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("SettingsWindow", "Jugador 1:", nullptr));
        label_3->setText(QApplication::translate("SettingsWindow", "Jugador 2:", nullptr));
        label_4->setText(QApplication::translate("SettingsWindow", "INSTRUCCIONES", nullptr));
        label_5->setText(QApplication::translate("SettingsWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">El planeta Samec ha sido atacado</span></p><p><span style=\" font-size:10pt;\">por diversos objetivos de una raza</span></p><p><span style=\" font-size:10pt;\">desconocida, nuestros protagonistas</span></p><p><span style=\" font-size:10pt;\">Sequel y Jecob deberan defender</span></p><p><span style=\" font-size:10pt;\">sus tierras a toda costa, para esto,</span></p><p><span style=\" font-size:10pt;\">los cientificos del planeta Semec</span></p><p><span style=\" font-size:10pt;\">les has otorgado unos ganchos capaces</span></p><p><span style=\" font-size:10pt;\">de emitir radiacion que divide</span></p><p><span style=\" font-size:10pt;\">en dos los objetivos de los invasores.</span></p></body></html>", nullptr));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("SettingsWindow", "Sequel", nullptr));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("SettingsWindow", "Jecob", nullptr));
        label_10->setText(QApplication::translate("SettingsWindow", "CONTROLES", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label_11->setText(QApplication::translate("SettingsWindow", "= + 1 vida", nullptr));
        pushButton_4->setText(QString());
        label_12->setText(QApplication::translate("SettingsWindow", "= + vel disparo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
