/********************************************************************************
** Form generated from reading UI file 'sesion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESION_H
#define UI_SESION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sesion
{
public:
    QWidget *centralwidget;
    QFrame *frame_2;
    QLabel *label_4;
    QLineEdit *usernameBox;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QPushButton *regButton;
    QLabel *label_7;
    QPushButton *loginButton_2;
    QPushButton *pushButton;
    QRadioButton *show_pass;
    QLabel *label_8;
    QPushButton *SALIR;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sesion)
    {
        if (Sesion->objectName().isEmpty())
            Sesion->setObjectName(QString::fromUtf8("Sesion"));
        Sesion->resize(750, 450);
        Sesion->setMaximumSize(QSize(750, 450));
        centralwidget = new QWidget(Sesion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 751, 451));
        frame_2->setStyleSheet(QString::fromUtf8("background: #101010;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 30, 311, 121));
        QFont font;
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/Titulo);"));
        usernameBox = new QLineEdit(frame_2);
        usernameBox->setObjectName(QString::fromUtf8("usernameBox"));
        usernameBox->setGeometry(QRect(120, 240, 271, 41));
        QPalette palette;
        QBrush brush(QColor(254, 254, 254, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(51, 51, 51, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        usernameBox->setPalette(palette);
        QFont font1;
        font1.setKerning(true);
        usernameBox->setFont(font1);
        usernameBox->setLayoutDirection(Qt::LeftToRight);
        usernameBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        usernameBox->setFrame(false);
        usernameBox->setCursorPosition(0);
        passwordBox = new QLineEdit(frame_2);
        passwordBox->setObjectName(QString::fromUtf8("passwordBox"));
        passwordBox->setGeometry(QRect(120, 300, 271, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        passwordBox->setPalette(palette1);
        passwordBox->setFont(font1);
        passwordBox->setLayoutDirection(Qt::LeftToRight);
        passwordBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        passwordBox->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordBox->setFrame(false);
        passwordBox->setEchoMode(QLineEdit::Password);
        passwordBox->setCursorPosition(0);
        loginButton = new QPushButton(frame_2);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(490, 200, 151, 41));
        loginButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        regButton = new QPushButton(frame_2);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        regButton->setGeometry(QRect(490, 250, 151, 41));
        regButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 160, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/player1.png);"));
        loginButton_2 = new QPushButton(frame_2);
        loginButton_2->setObjectName(QString::fromUtf8("loginButton_2"));
        loginButton_2->setGeometry(QRect(490, 300, 151, 41));
        loginButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 16pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #ffaa00;\n"
"Color: #fefefe;"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(680, 10, 61, 61));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/info icon);"));
        show_pass = new QRadioButton(frame_2);
        show_pass->setObjectName(QString::fromUtf8("show_pass"));
        show_pass->setGeometry(QRect(130, 360, 201, 31));
        show_pass->setLayoutDirection(Qt::LeftToRight);
        show_pass->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"color: #fefefe;\n"
"radius-background-color: rgb(51, 51, 51);"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 160, 61, 61));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/player2.png);"));
        SALIR = new QPushButton(frame_2);
        SALIR->setObjectName(QString::fromUtf8("SALIR"));
        SALIR->setGeometry(QRect(660, 400, 81, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        SALIR->setFont(font2);
        SALIR->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"font: 12pt \"MV Boli\";\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        Sesion->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Sesion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Sesion->setStatusBar(statusbar);

        retranslateUi(Sesion);

        QMetaObject::connectSlotsByName(Sesion);
    } // setupUi

    void retranslateUi(QMainWindow *Sesion)
    {
        Sesion->setWindowTitle(QApplication::translate("Sesion", "HOOK HIT", nullptr));
        label_4->setText(QString());
        usernameBox->setText(QString());
        usernameBox->setPlaceholderText(QApplication::translate("Sesion", "Nombre de usuario", nullptr));
        passwordBox->setInputMask(QString());
        passwordBox->setText(QString());
        passwordBox->setPlaceholderText(QApplication::translate("Sesion", "Contrase\303\261a", nullptr));
        loginButton->setText(QApplication::translate("Sesion", "Jugar", nullptr));
        regButton->setText(QApplication::translate("Sesion", "Registrarse", nullptr));
        label_7->setText(QString());
        loginButton_2->setText(QApplication::translate("Sesion", "Invitado", nullptr));
        pushButton->setText(QString());
        show_pass->setText(QApplication::translate("Sesion", "Mostrar contrase\303\261a", nullptr));
        label_8->setText(QString());
        SALIR->setText(QApplication::translate("Sesion", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sesion: public Ui_Sesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESION_H
