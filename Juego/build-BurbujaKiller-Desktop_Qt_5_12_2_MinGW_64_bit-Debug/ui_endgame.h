/********************************************************************************
** Form generated from reading UI file 'endgame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDGAME_H
#define UI_ENDGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EndGame
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *titulo;
    QLabel *label_2;
    QTableWidget *tabla;
    QPushButton *SALIR;
    QPushButton *Eliminar;
    QLabel *label;
    QPushButton *Menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EndGame)
    {
        if (EndGame->objectName().isEmpty())
            EndGame->setObjectName(QString::fromUtf8("EndGame"));
        EndGame->resize(750, 450);
        EndGame->setMaximumSize(QSize(750, 450));
        centralwidget = new QWidget(EndGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 750, 450));
        frame->setStyleSheet(QString::fromUtf8("background-color: #101010;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        titulo = new QLabel(frame);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setEnabled(true);
        titulo->setGeometry(QRect(50, 80, 641, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(48);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        titulo->setFont(font);
        titulo->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #ffffff;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';\n"
"font: 48pt \"MV Boli\";\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(80, 10, 561, 81));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #933;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';\n"
"font: 48pt \"MV Boli\";\n"
""));
        tabla = new QTableWidget(frame);
        if (tabla->columnCount() < 3)
            tabla->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(36, 134, 134));
        tabla->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tabla->rowCount() < 50)
            tabla->setRowCount(50);
        tabla->setObjectName(QString::fromUtf8("tabla"));
        tabla->setEnabled(true);
        tabla->setGeometry(QRect(50, 170, 661, 181));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tabla->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tabla->setFont(font1);
        tabla->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"MV Boli\";\n"
""));
        tabla->setRowCount(50);
        tabla->setColumnCount(3);
        tabla->horizontalHeader()->setDefaultSectionSize(200);
        tabla->verticalHeader()->setCascadingSectionResizes(false);
        SALIR = new QPushButton(frame);
        SALIR->setObjectName(QString::fromUtf8("SALIR"));
        SALIR->setGeometry(QRect(600, 370, 131, 41));
        SALIR->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        Eliminar = new QPushButton(frame);
        Eliminar->setObjectName(QString::fromUtf8("Eliminar"));
        Eliminar->setGeometry(QRect(270, 370, 261, 41));
        Eliminar->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #aa0000;\n"
"Color: #fefefe;"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(170, 10, 411, 81));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';\n"
"font: 48pt \"MV Boli\";\n"
""));
        Menu = new QPushButton(frame);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(20, 370, 191, 41));
        Menu->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        EndGame->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(EndGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EndGame->setStatusBar(statusbar);

        retranslateUi(EndGame);

        QMetaObject::connectSlotsByName(EndGame);
    } // setupUi

    void retranslateUi(QMainWindow *EndGame)
    {
        EndGame->setWindowTitle(QApplication::translate("EndGame", "HOOK HIT", nullptr));
        titulo->setText(QApplication::translate("EndGame", "GLOBAL SCORES", nullptr));
        label_2->setText(QApplication::translate("EndGame", "FIN DE JUEGO", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabla->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EndGame", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabla->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EndGame", "Puntaje", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabla->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EndGame", "Vidas sobrantes", nullptr));
        SALIR->setText(QApplication::translate("EndGame", "SALIR", nullptr));
        Eliminar->setText(QApplication::translate("EndGame", "ELIMINAR MI PUNTAJE", nullptr));
        label->setText(QApplication::translate("EndGame", "GANASTE", nullptr));
        Menu->setText(QApplication::translate("EndGame", "MENU PRINCIPAL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndGame: public Ui_EndGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDGAME_H
