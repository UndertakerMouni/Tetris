#-------------------------------------------------
#
# Project created by QtCreator 2014-11-26T00:02:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tetris
TEMPLATE = app


SOURCES += main.cpp\
        tetris.cpp \
    bin.cpp \
    brick.cpp

HEADERS  += tetris.h \
    bin.h \
    brick.h

FORMS    += tetris.ui

OTHER_FILES += \
    images/background.png \
    images/green.bmp \
    images/purple.bmp \
    images/red.bmp \
    images/ya.bmp \
    images/yello.bmp \
    images/blue.png \
    images/green.png \
    images/purple.png \
    images/red.png \
    images/ya.png \
    images/yello.png

RESOURCES += \
    Resource.qrc
