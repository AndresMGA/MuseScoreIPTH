# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.29.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.29.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andresgarcia/MuseScore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release

# Utility rule file for big_resources_fonts_MuseJazz.

# Include any custom commands dependencies for this target.
include src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/compiler_depend.make

# Include the progress variables for this target.
include src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/progress.make

src/engraving/CMakeFiles/big_resources_fonts_MuseJazz: src/engraving/qrc_fonts_MuseJazztmp.cpp

src/engraving/qrc_fonts_MuseJazztmp.cpp: /Users/andresgarcia/MuseScore/src/engraving/data/fonts/fonts_MuseJazz.qrc
src/engraving/qrc_fonts_MuseJazztmp.cpp: /Users/andresgarcia/MuseScore/fonts/musejazz/metadata.json
src/engraving/qrc_fonts_MuseJazztmp.cpp: /Users/andresgarcia/MuseScore/fonts/musejazz/MuseJazz.otf
src/engraving/qrc_fonts_MuseJazztmp.cpp: /Users/andresgarcia/MuseScore/fonts/musejazz/MuseJazzText.otf
src/engraving/qrc_fonts_MuseJazztmp.cpp: /usr/local/share/qt/libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running rcc pass 1 for resource fonts_MuseJazz"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving && /usr/local/share/qt/libexec/rcc --name fonts_MuseJazz --pass 1 --output /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving/qrc_fonts_MuseJazztmp.cpp /Users/andresgarcia/MuseScore/src/engraving/data/fonts/fonts_MuseJazz.qrc

big_resources_fonts_MuseJazz: src/engraving/CMakeFiles/big_resources_fonts_MuseJazz
big_resources_fonts_MuseJazz: src/engraving/qrc_fonts_MuseJazztmp.cpp
big_resources_fonts_MuseJazz: src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/build.make
.PHONY : big_resources_fonts_MuseJazz

# Rule to build all files generated by this target.
src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/build: big_resources_fonts_MuseJazz
.PHONY : src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/build

src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving && $(CMAKE_COMMAND) -P CMakeFiles/big_resources_fonts_MuseJazz.dir/cmake_clean.cmake
.PHONY : src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/clean

src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/depend:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/engraving /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/engraving/CMakeFiles/big_resources_fonts_MuseJazz.dir/depend

