# Install script for directory: /Users/andresgarcia/MuseScore/src/app

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/install/mscore.app")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/install" TYPE DIRECTORY FILES "/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/app/mscore.app" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/install/mscore.app/Contents/MacOS/mscore" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/install/mscore.app/Contents/MacOS/mscore")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/lib"
      -add_rpath "/usr/local/Cellar/qt@5/5.15.13_1/lib"
      "$ENV{DESTDIR}/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/install/mscore.app/Contents/MacOS/mscore")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mscore.app/Contents/Resources/fonts" TYPE FILE FILES
    "/Users/andresgarcia/MuseScore/fonts/bravura/BravuraText.otf"
    "/Users/andresgarcia/MuseScore/fonts/campania/Campania.otf"
    "/Users/andresgarcia/MuseScore/fonts/edwin/Edwin-BdIta.otf"
    "/Users/andresgarcia/MuseScore/fonts/edwin/Edwin-Bold.otf"
    "/Users/andresgarcia/MuseScore/fonts/edwin/Edwin-Italic.otf"
    "/Users/andresgarcia/MuseScore/fonts/edwin/Edwin-Roman.otf"
    "/Users/andresgarcia/MuseScore/fonts/gootville/GootvilleText.otf"
    "/Users/andresgarcia/MuseScore/fonts/FreeSans.ttf"
    "/Users/andresgarcia/MuseScore/fonts/FreeSerif.ttf"
    "/Users/andresgarcia/MuseScore/fonts/FreeSerifBold.ttf"
    "/Users/andresgarcia/MuseScore/fonts/FreeSerifItalic.ttf"
    "/Users/andresgarcia/MuseScore/fonts/FreeSerifBoldItalic.ttf"
    "/Users/andresgarcia/MuseScore/fonts/leland/Leland.otf"
    "/Users/andresgarcia/MuseScore/fonts/leland/LelandText.otf"
    "/Users/andresgarcia/MuseScore/fonts/mscore-BC.ttf"
    "/Users/andresgarcia/MuseScore/fonts/mscoreTab.ttf"
    "/Users/andresgarcia/MuseScore/fonts/mscore/MScoreText.ttf"
    "/Users/andresgarcia/MuseScore/fonts/musejazz/MuseJazzText.otf"
    "/Users/andresgarcia/MuseScore/fonts/petaluma/PetalumaScript.otf"
    "/Users/andresgarcia/MuseScore/fonts/petaluma/PetalumaText.otf"
    "/Users/andresgarcia/MuseScore/fonts/finalemaestro/FinaleMaestroText-Regular.otf"
    "/Users/andresgarcia/MuseScore/fonts/finalebroadway/FinaleBroadwayText.otf"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mscore.app/Contents/Resources/Frameworks/" TYPE DIRECTORY FILES "/usr/local/Cellar/qt@5/5.15.13_1/qml" REGEX ".*qtwebkit.*" EXCLUDE REGEX ".*qttest.*" EXCLUDE REGEX ".*qtsensors.*" EXCLUDE REGEX ".*qtmultimedia.*" EXCLUDE REGEX ".*qtaudioengine.*" EXCLUDE REGEX ".*_debug\\.dylib" EXCLUDE)
endif()

