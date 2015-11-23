# RInside does not go well with -Wextra and -Weffc++
include(../RibiLibraries/DesktopApplicationSloppy.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralDesktop.pri)
include(../RibiLibraries/Rinside.pri)

include(../RibiClasses/CppHistogramR/CppHistogramR.pri)
include(../RibiClasses/CppRibiRinside/CppRibiRinside.pri)

include(SpeciesOfTheRingsDesktop.pri)

SOURCES += qtmain.cpp
