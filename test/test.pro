include(../global.pri)
QT += widgets testlib

INCLUDEPATH += $${ROOT_DIRECTORY}/src/
INCLUDEPATH += $${ROOT_DIRECTORY}/lib/

HEADERS += \
  $${ROOT_DIRECTORY}/src/mainwindow.h

SOURCES += \
  $${ROOT_DIRECTORY}/src/mainwindow.cpp \ 
  test_gui.cpp

TARGET = test_gui
