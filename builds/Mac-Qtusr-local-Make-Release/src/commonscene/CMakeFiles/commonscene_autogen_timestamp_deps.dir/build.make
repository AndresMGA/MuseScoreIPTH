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

# Utility rule file for commonscene_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/progress.make

commonscene_autogen_timestamp_deps: src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/build.make
.PHONY : commonscene_autogen_timestamp_deps

# Rule to build all files generated by this target.
src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/build: commonscene_autogen_timestamp_deps
.PHONY : src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/build

src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/commonscene && $(CMAKE_COMMAND) -P CMakeFiles/commonscene_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/clean

src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/depend:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/commonscene /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/commonscene /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/commonscene/CMakeFiles/commonscene_autogen_timestamp_deps.dir/depend

