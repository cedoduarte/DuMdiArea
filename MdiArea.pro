#-------------------------------------------------
#
# Project created by QtCreator 2015-06-10T09:50:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MdiArea
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    AbrirForm.cpp \
    VerForm.cpp

HEADERS  += MainWindow.h \
    AbrirForm.h \
    VerForm.h

FORMS    += MainWindow.ui \
    AbrirForm.ui \
    VerForm.ui

QMAKE_CXXFLAGS += -std=gnu++14
