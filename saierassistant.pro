#-------------------------------------------------
#
# Project created by QtCreator 2018-02-04T21:37:47
#
#-------------------------------------------------

QT       += core gui network webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = saierassistant
TEMPLATE = app
DESTDIR = ../saierassistant

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.
