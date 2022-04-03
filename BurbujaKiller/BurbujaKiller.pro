QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    disparo.cpp \
    main.cpp \
    mainwindow.cpp \
    muro.cpp \
    nivel.cpp \
    pelota.cpp \
    personaje.cpp \
    pua.cpp \
    senoidal.cpp

HEADERS += \
    disparo.h \
    mainwindow.h \
    muro.h \
    nivel.h \
    pelota.h \
    personaje.h \
    pua.h \
    senoidal.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
