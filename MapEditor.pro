#-------------------------------------------------
#
# Project created by QtCreator 2012-02-22T00:52:39
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = MapEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp

HEADERS  += mainwindow.h \
    singleton \
    glwidget.h

FORMS    += mainwindow.ui
