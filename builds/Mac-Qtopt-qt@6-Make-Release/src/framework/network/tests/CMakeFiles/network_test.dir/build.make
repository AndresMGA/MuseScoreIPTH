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
include src/framework/network/tests/CMakeFiles/network_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/network/tests/CMakeFiles/network_test.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/network/tests/CMakeFiles/network_test.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/network/tests/CMakeFiles/network_test.dir/flags.make

src/framework/network/tests/network_test_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/framework/network/tests/network_test_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/framework/network/tests/network_test_autogen/timestamp: src/framework/network/tests/CMakeFiles/network_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target network_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests/CMakeFiles/network_test_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests/network_test_autogen/timestamp

src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o: src/framework/network/tests/CMakeFiles/network_test.dir/flags.make
src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o: src/framework/network/tests/network_test_autogen/mocs_compilation.cpp
src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o: src/framework/network/tests/CMakeFiles/network_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests/network_test_autogen/mocs_compilation.cpp

src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests/network_test_autogen/mocs_compilation.cpp > CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.i

src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests/network_test_autogen/mocs_compilation.cpp -o CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.s

src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o: src/framework/network/tests/CMakeFiles/network_test.dir/flags.make
src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o: src/framework/network/tests/CMakeFiles/network_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o -MF CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o.d -o CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.i

src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.s

src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o: src/framework/network/tests/CMakeFiles/network_test.dir/flags.make
src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o: src/framework/network/tests/CMakeFiles/network_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o -MF CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o.d -o CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/network_test.dir/__/__/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/network_test.dir/__/__/testing/environment.cpp.i

src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/network_test.dir/__/__/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/network_test.dir/__/__/testing/environment.cpp.s

# Object files for target network_test
network_test_OBJECTS = \
"CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o" \
"CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o"

# External object files for target network_test
network_test_EXTERNAL_OBJECTS =

src/framework/network/tests/network_test: src/framework/network/tests/CMakeFiles/network_test.dir/network_test_autogen/mocs_compilation.cpp.o
src/framework/network/tests/network_test: src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/gmain.cpp.o
src/framework/network/tests/network_test: src/framework/network/tests/CMakeFiles/network_test.dir/__/__/testing/environment.cpp.o
src/framework/network/tests/network_test: src/framework/network/tests/CMakeFiles/network_test.dir/build.make
src/framework/network/tests/network_test: lib/libgmock.a
src/framework/network/tests/network_test: src/framework/global/libglobal.a
src/framework/network/tests/network_test: src/framework/network/libnetwork.a
src/framework/network/tests/network_test: lib/libgtest.a
src/framework/network/tests/network_test: src/framework/global/libglobal.a
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtNetworkAuth.framework/QtNetworkAuth
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtQuickControls2.framework/QtQuickControls2
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtQuickTemplates2.framework/QtQuickTemplates2
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtQuickWidgets.framework/QtQuickWidgets
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtQuick.framework/QtQuick
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtQmlModels.framework/QtQmlModels
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtQml.framework/QtQml
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtXml.framework/QtXml
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtXmlPatterns.framework/QtXmlPatterns
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtNetwork.framework/QtNetwork
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtSvg.framework/QtSvg
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtPrintSupport.framework/QtPrintSupport
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtOpenGL.framework/QtOpenGL
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtWidgets.framework/QtWidgets
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtGui.framework/QtGui
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtConcurrent.framework/QtConcurrent
src/framework/network/tests/network_test: /usr/local/opt/qt@5/lib/QtCore.framework/QtCore
src/framework/network/tests/network_test: src/framework/network/tests/CMakeFiles/network_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable network_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/network_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/network/tests/CMakeFiles/network_test.dir/build: src/framework/network/tests/network_test
.PHONY : src/framework/network/tests/CMakeFiles/network_test.dir/build

src/framework/network/tests/CMakeFiles/network_test.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests && $(CMAKE_COMMAND) -P CMakeFiles/network_test.dir/cmake_clean.cmake
.PHONY : src/framework/network/tests/CMakeFiles/network_test.dir/clean

src/framework/network/tests/CMakeFiles/network_test.dir/depend: src/framework/network/tests/network_test_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/network/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/network/tests/CMakeFiles/network_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/network/tests/CMakeFiles/network_test.dir/depend

