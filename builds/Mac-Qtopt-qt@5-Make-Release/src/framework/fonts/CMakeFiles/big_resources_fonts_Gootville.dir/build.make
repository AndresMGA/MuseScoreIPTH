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
CMAKE_SOURCE_DIR = /Users/andresgarcia/MuseScoreIPTH

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release

# Utility rule file for big_resources_fonts_Gootville.

# Include any custom commands dependencies for this target.
include src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/progress.make

src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville: src/framework/fonts/qrc_fonts_Gootvilletmp.cpp

src/framework/fonts/qrc_fonts_Gootvilletmp.cpp: /Users/andresgarcia/MuseScoreIPTH/src/framework/fonts/fonts_Gootville.qrc
src/framework/fonts/qrc_fonts_Gootvilletmp.cpp: /Users/andresgarcia/MuseScoreIPTH/fonts/gootville/metadata.json
src/framework/fonts/qrc_fonts_Gootvilletmp.cpp: /Users/andresgarcia/MuseScoreIPTH/fonts/gootville/Gootville.otf
src/framework/fonts/qrc_fonts_Gootvilletmp.cpp: /Users/andresgarcia/MuseScoreIPTH/fonts/gootville/GootvilleText.otf
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_fonts_Gootvilletmp.cpp"
	cd /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release/src/framework/fonts && /usr/local/opt/qt@5/bin/rcc --name fonts_Gootville --pass 1 --output /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release/src/framework/fonts/qrc_fonts_Gootvilletmp.cpp /Users/andresgarcia/MuseScoreIPTH/src/framework/fonts/fonts_Gootville.qrc

big_resources_fonts_Gootville: src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville
big_resources_fonts_Gootville: src/framework/fonts/qrc_fonts_Gootvilletmp.cpp
big_resources_fonts_Gootville: src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/build.make
.PHONY : big_resources_fonts_Gootville

# Rule to build all files generated by this target.
src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/build: big_resources_fonts_Gootville
.PHONY : src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/build

src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/clean:
	cd /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release/src/framework/fonts && $(CMAKE_COMMAND) -P CMakeFiles/big_resources_fonts_Gootville.dir/cmake_clean.cmake
.PHONY : src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/clean

src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/depend:
	cd /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScoreIPTH /Users/andresgarcia/MuseScoreIPTH/src/framework/fonts /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release/src/framework/fonts /Users/andresgarcia/MuseScoreIPTH/builds/Mac-Qtopt-qt@5-Make-Release/src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/fonts/CMakeFiles/big_resources_fonts_Gootville.dir/depend
