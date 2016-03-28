# inspired by buidl as seen in https://github.com/sierdzio/qeasyshell.git
ROOT_DIRECTORY = $$PWD
LIB_DIRECTORY = $${ROOT_DIRECTORY}/lib
BUILD_DIRECTORY = $${ROOT_DIRECTORY}/build
TEST_DIRECTORY = $${BUILD_DIRECTORY}/test
EXAMPLES_DIRECTORY = $${BUILD_DIRECTORY}/examples
EXEC_DIRECTORY = $${BUILD_DIRECTORY}

QT += core gui widgets

DESTDIR = $${EXEC_DIRECTORY}
OBJECTS_DIR = $${BUILD_DIRECTORY}/objs
UI_DIR = $${BUILD_DIRECTORY}/uis
MOC_DIR = $${BUILD_DIRECTORY}/mocs
