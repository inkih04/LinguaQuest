TEMPLATE = app
QT += widgets
TARGET = LinguaQuest
RESOURCES += resources.qrc  # Archivo de recursos
DEPENDPATH += .
INCLUDEPATH += .
# Input
SOURCES += MyForm.cpp main.cpp FileManager.cpp
HEADERS += MyForm.h FileManager.h
FORMS += MyForm.ui

