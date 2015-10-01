#-------------------------------------------------
#
# Project created by QtCreator 2015-10-01T15:56:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProgressButton
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    progress.cpp

HEADERS  += mainwindow.h \
    sleep.h \
    progress.h

FORMS    += mainwindow.ui

CONFIG += c++11
