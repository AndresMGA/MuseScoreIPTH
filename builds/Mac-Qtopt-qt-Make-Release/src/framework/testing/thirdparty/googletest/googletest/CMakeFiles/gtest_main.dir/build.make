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
CMAKE_BINARY_DIR = /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release

# Include any dependencies generated for this target.
include src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/flags.make

src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/moc
src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/uic
src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/timestamp: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gtest_main"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/timestamp

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/flags.make
src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/mocs_compilation.cpp
src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o -MF CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/mocs_compilation.cpp

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/mocs_compilation.cpp > CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/mocs_compilation.cpp -o CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/flags.make
src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: /Users/andresgarcia/MuseScore/src/framework/testing/thirdparty/googletest/googletest/src/gtest_main.cc
src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -MF CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.d -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /Users/andresgarcia/MuseScore/src/framework/testing/thirdparty/googletest/googletest/src/gtest_main.cc

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/thirdparty/googletest/googletest/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/thirdparty/googletest/googletest/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib/libgtest_main.a: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o
lib/libgtest_main.a: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
lib/libgtest_main.a: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/build.make
lib/libgtest_main.a: src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../../../../../lib/libgtest_main.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/build: lib/libgtest_main.a
.PHONY : src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/build

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/clean

src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/depend: src/framework/testing/thirdparty/googletest/googletest/gtest_main_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/testing/thirdparty/googletest/googletest /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/testing/thirdparty/googletest/googletest/CMakeFiles/gtest_main.dir/depend

