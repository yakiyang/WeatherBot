#-------------------------------------------------
#
# Project created by QtCreator 2015-05-23T18:05:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
        pro_2048.cpp \
    game.cpp \
    result.cpp \
    cell.cpp \
    event.cpp

HEADERS  += pro_2048.h \
    game.h \
    result.h \
    cell.h \
    event.h

FORMS    += pro_2048.ui \
    game.ui \
    result.ui \
    cell.ui \
    event.ui

RESOURCES +=
