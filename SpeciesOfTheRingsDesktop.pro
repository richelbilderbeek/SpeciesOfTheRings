include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppFileIo/CppFileIo.pri)
include(../RibiClasses/CppHelp/CppHelp.pri)
include(../RibiClasses/CppMenuDialog/CppMenuDialog.pri)
include(../RibiClasses/CppQtAboutDialog/CppQtAboutDialog.pri)
include(../RibiClasses/CppQtHideAndShowDialog/CppQtHideAndShowDialog.pri)

include(SpeciesOfTheRingsDesktop.pri)

SOURCES += qtmain.cpp

# Warning
QMAKE_CXXFLAGS += -Wall -Wextra -Werror

# Qt
QT += core gui widgets

CONFIG += debug_and_release
CONFIG(debug, debug|release) {
  message(Debug mode)
}

CONFIG(release, debug|release) {
  message(Release mode)
  DEFINES += NDEBUG
}

# Fixes
#/usr/include/boost/math/constants/constants.hpp:277: error: unable to find numeric literal operator 'operator""Q'
#   BOOST_DEFINE_MATH_CONSTANT(half, 5.000000000000000000000000000000000000e-01, "5.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000e-01")
#   ^
QMAKE_CXXFLAGS += -fext-numeric-literals


