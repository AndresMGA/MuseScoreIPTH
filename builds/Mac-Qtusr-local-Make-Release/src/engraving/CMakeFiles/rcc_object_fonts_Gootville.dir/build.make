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

# Include any dependencies generated for this target.
include src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/compiler_depend.make

# Include the progress variables for this target.
include src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/progress.make

# Include the compile flags for this target's objects.
include src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/flags.make

src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o: src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/flags.make
src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o: src/engraving/qrc_fonts_Gootvilletmp.cpp
src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o: src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o -MF CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o.d -o CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving/qrc_fonts_Gootvilletmp.cpp

src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving/qrc_fonts_Gootvilletmp.cpp > CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.i

src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving/qrc_fonts_Gootvilletmp.cpp -o CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.s

rcc_object_fonts_Gootville: src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/qrc_fonts_Gootvilletmp.cpp.o
rcc_object_fonts_Gootville: src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/build.make
.PHONY : rcc_object_fonts_Gootville

# Rule to build all files generated by this target.
src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/build: rcc_object_fonts_Gootville
.PHONY : src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/build

src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving && $(CMAKE_COMMAND) -P CMakeFiles/rcc_object_fonts_Gootville.dir/cmake_clean.cmake
.PHONY : src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/clean

src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/depend:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/engraving /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/engraving/CMakeFiles/rcc_object_fonts_Gootville.dir/depend

