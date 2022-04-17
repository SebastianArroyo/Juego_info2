/********************************************************************************
** Form generated from reading UI file 'partidas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIDAS_H
#define UI_PARTIDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Partidas
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_4;
    QPushButton *volver;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *x_3;
    QLabel *x_1;
    QLabel *x_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Partidas)
    {
        if (Partidas->objectName().isEmpty())
            Partidas->setObjectName(QString::fromUtf8("Partidas"));
        Partidas->resize(750, 450);
        Partidas->setMaximumSize(QSize(750, 450));
        centralwidget = new QWidget(Partidas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 750, 450));
        frame->setStyleSheet(QString::fromUtf8("background-color: #101010;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 110, 451, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Script"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/Titulo);"));
        volver = new QPushButton(frame);
        volver->setObjectName(QString::fromUtf8("volver"));
        volver->setGeometry(QRect(660, 10, 71, 71));
        volver->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/back icon.png);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 310, 120, 60));
        pushButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(220, 310, 120, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(390, 310, 120, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"font: 16pt \"MV Boli\";\n"
"Color: #fefefe;"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(570, 310, 120, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"font: 16pt \"MV Boli\";\n"
"Color: #fefefe;"));
        x_3 = new QLabel(centralwidget);
        x_3->setObjectName(QString::fromUtf8("x_3"));
        x_3->setEnabled(true);
        x_3->setGeometry(QRect(610, 290, 51, 51));
        x_3->setStyleSheet(QString::fromUtf8("image: url(:/Imagenes/X.png);"));
        x_1 = new QLabel(centralwidget);
        x_1->setObjectName(QString::fromUtf8("x_1"));
        x_1->setEnabled(true);
        x_1->setGeometry(QRect(260, 290, 51, 51));
        x_1->setStyleSheet(QString::fromUtf8("image: url(:/Imagenes/X.png);"));
        x_2 = new QLabel(centralwidget);
        x_2->setObjectName(QString::fromUtf8("x_2"));
        x_2->setEnabled(true);
        x_2->setGeometry(QRect(430, 290, 51, 51));
        x_2->setStyleSheet(QString::fromUtf8("image: url(:/Imagenes/X.png);"));
        Partidas->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Partidas);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Partidas->setStatusBar(statusbar);

        retranslateUi(Partidas);

        QMetaObject::connectSlotsByName(Partidas);
    } // setupUi

    void retranslateUi(QMainWindow *Partidas)
    {
        Partidas->setWindowTitle(QApplication::translate("Partidas", "HOOK HIT", nullptr));
        label_4->setText(QApplication::translate("Partidas", "<html><head/><body><p><br/></p></body></html>", nullptr));
        volver->setText(QString());
        pushButton->setText(QApplication::translate("Partidas", "Nivel 1", nullptr));
        pushButton_2->setText(QApplication::translate("Partidas", "Nivel 2", nullptr));
        pushButton_3->setText(QApplication::translate("Partidas", "Nivel 3", nullptr));
        pushButton_4->setText(QApplication::translate("Partidas", "Nivel 4", nullptr));
        x_3->setText(QString());
        x_1->setText(QString());
        x_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Partidas: public Ui_Partidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIDAS_H
