QT       += core gui
QT       += Sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += Sql


CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    avalible_room.cpp \
    help.cpp \
    list.cpp \
    main.cpp \
    mainwindow.cpp \
    name.cpp \
    otp.cpp \
    payment.cpp

HEADERS += \
    avalible_room.h \
    databaseheader.h \
    help.h \
    list.h \
    mainwindow.h \
    name.h \
    otp.h \
    payment.h


FORMS += \
    avalible_room.ui \
    help.ui \
    list.ui \
    mainwindow.ui \
    name.ui \
    otp.ui \
    payment.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
