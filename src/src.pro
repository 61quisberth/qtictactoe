# Check if the config file exists
! include( ../global.pri ) {
    error( "Couldn't find the global.pri file!" )
}

INCLUDEPATH += $${ROOT_DIRECTORY}/lib/
TARGET = qtictactoe

SOURCES += \
  main.cpp \
  mainwindow.cpp

HEADERS  += \
  mainwindow.h

FORMS    += \
  mainwindow.ui
