QT       += core gui
QT += sql
win32-msvc* {
    QMAKE_CXXFLAGS += /source-charset:utf-8 /execution-charset:utf-8
}
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addevedlg.cpp \
    calendarwidget.cpp \
    date.cpp \
    login.cpp \
    logon.cpp \
    main.cpp \
    mysqlconnect.cpp \
    showinf.cpp \
    tdlcalendar.cpp \
    thingswidget.cpp \
    widget.cpp

HEADERS += \
    addevedlg.h \
    calendarwidget.h \
    date.h \
    dbType.h \
    login.h \
    logon.h \
    mysqlconnect.h \
    showinf.h \
    tdlcalendar.h \
    thingswidget.h \
    widget.h

FORMS += \
    addevedlg.ui \
    login.ui \
    logon.ui \
    showinf.ui \
    thingswidget.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
