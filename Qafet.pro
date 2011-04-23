TEMPLATE = app
TARGET = Qafet
QT += core \
    gui \
    sql
HEADERS += src/AccountListView.h \
    src/AccountModel.h \
    src/ListAccountsWidget.h \
    src/MainWindow.h
SOURCES += src/AccountListView.cpp \
    src/AccountModel.cpp \
    src/main.cpp \
    src/MainWindow.cpp \
    src/ListAccountsWidget.cpp
FORMS += 
RESOURCES += 
MOC_DIR = build
OBJECTS_DIR = build
RCC_DIR = build
