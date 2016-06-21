#-------------------------------------------------
#
# Project created by QtCreator 2016-06-18T10:52:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testthread
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logicthing.cpp \
    my_thread.cpp

HEADERS  += mainwindow.h \
    logicthing.h \
    my_thread.h

FORMS    += mainwindow.ui
