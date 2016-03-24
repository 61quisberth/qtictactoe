# Check if the config file exists
! include( ../global.pri ) {
    error( "Couldn't find the global.pri file!" )
}

TARGET = qtictactoe

SOURCES += \
  main.cpp \
  mainwindow.cpp

HEADERS  += \
  mainwindow.h

FORMS    += \
  mainwindow.ui
