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

# Utility rule file for muse_diagnostics_tests_autogen.

# Include any custom commands dependencies for this target.
include src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/progress.make

src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen: src/framework/diagnostics/tests/muse_diagnostics_tests_autogen/timestamp

src/framework/diagnostics/tests/muse_diagnostics_tests_autogen/timestamp: /usr/local/share/qt/libexec/moc
src/framework/diagnostics/tests/muse_diagnostics_tests_autogen/timestamp: /usr/local/share/qt/libexec/uic
src/framework/diagnostics/tests/muse_diagnostics_tests_autogen/timestamp: src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target muse_diagnostics_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/diagnostics/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/diagnostics/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/diagnostics/tests/muse_diagnostics_tests_autogen/timestamp

muse_diagnostics_tests_autogen: src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen
muse_diagnostics_tests_autogen: src/framework/diagnostics/tests/muse_diagnostics_tests_autogen/timestamp
muse_diagnostics_tests_autogen: src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/build.make
.PHONY : muse_diagnostics_tests_autogen

# Rule to build all files generated by this target.
src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/build: muse_diagnostics_tests_autogen
.PHONY : src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/build

src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/diagnostics/tests && $(CMAKE_COMMAND) -P CMakeFiles/muse_diagnostics_tests_autogen.dir/cmake_clean.cmake
.PHONY : src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/clean

src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/depend:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/diagnostics/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/diagnostics/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/diagnostics/tests/CMakeFiles/muse_diagnostics_tests_autogen.dir/depend

