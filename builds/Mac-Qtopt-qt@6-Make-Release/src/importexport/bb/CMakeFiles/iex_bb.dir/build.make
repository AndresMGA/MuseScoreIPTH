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
CMAKE_BINARY_DIR = /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release

# Include any dependencies generated for this target.
include src/importexport/bb/CMakeFiles/iex_bb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/importexport/bb/CMakeFiles/iex_bb.dir/compiler_depend.make

# Include the progress variables for this target.
include src/importexport/bb/CMakeFiles/iex_bb.dir/progress.make

# Include the compile flags for this target's objects.
include src/importexport/bb/CMakeFiles/iex_bb.dir/flags.make

src/importexport/bb/iex_bb_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/importexport/bb/iex_bb_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/importexport/bb/iex_bb_autogen/timestamp: src/importexport/bb/CMakeFiles/iex_bb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target iex_bb"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb/CMakeFiles/iex_bb_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb/iex_bb_autogen/timestamp

src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o: src/importexport/bb/CMakeFiles/iex_bb.dir/flags.make
src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o: src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx
src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx
src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx.pch
src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o: src/importexport/bb/CMakeFiles/iex_bb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -MD -MT src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx

src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx > CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.i

src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.s

# Object files for target iex_bb
iex_bb_OBJECTS = \
"CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o"

# External object files for target iex_bb
iex_bb_EXTERNAL_OBJECTS =

src/importexport/bb/libiex_bb.a: src/importexport/bb/CMakeFiles/iex_bb.dir/Unity/unity_0_cxx.cxx.o
src/importexport/bb/libiex_bb.a: src/importexport/bb/CMakeFiles/iex_bb.dir/build.make
src/importexport/bb/libiex_bb.a: src/importexport/bb/CMakeFiles/iex_bb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libiex_bb.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && $(CMAKE_COMMAND) -P CMakeFiles/iex_bb.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iex_bb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/importexport/bb/CMakeFiles/iex_bb.dir/build: src/importexport/bb/libiex_bb.a
.PHONY : src/importexport/bb/CMakeFiles/iex_bb.dir/build

src/importexport/bb/CMakeFiles/iex_bb.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb && $(CMAKE_COMMAND) -P CMakeFiles/iex_bb.dir/cmake_clean.cmake
.PHONY : src/importexport/bb/CMakeFiles/iex_bb.dir/clean

src/importexport/bb/CMakeFiles/iex_bb.dir/depend: src/importexport/bb/iex_bb_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/importexport/bb /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/bb/CMakeFiles/iex_bb.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/importexport/bb/CMakeFiles/iex_bb.dir/depend

