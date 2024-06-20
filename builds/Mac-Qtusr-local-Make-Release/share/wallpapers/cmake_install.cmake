# Install script for directory: /Users/andresgarcia/MuseScore/share/wallpapers

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mscore.app/Contents/Resources/wallpapers" TYPE FILE FILES
    "/Users/andresgarcia/MuseScore/share/wallpapers/paper1.png"
    "/Users/andresgarcia/MuseScore/share/wallpapers/paper2.png"
    "/Users/andresgarcia/MuseScore/share/wallpapers/paper3.png"
    "/Users/andresgarcia/MuseScore/share/wallpapers/paper4.png"
    "/Users/andresgarcia/MuseScore/share/wallpapers/paper5.png"
    "/Users/andresgarcia/MuseScore/share/wallpapers/paper6.png"
    "/Users/andresgarcia/MuseScore/share/wallpapers/paper7.png"
    "/Users/andresgarcia/MuseScore/share/wallpapers/background1.png"
    )
endif()

