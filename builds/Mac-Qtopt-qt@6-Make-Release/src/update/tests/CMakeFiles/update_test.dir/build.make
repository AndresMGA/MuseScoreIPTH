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
include src/update/tests/CMakeFiles/update_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/update/tests/CMakeFiles/update_test.dir/compiler_depend.make

# Include the progress variables for this target.
include src/update/tests/CMakeFiles/update_test.dir/progress.make

# Include the compile flags for this target's objects.
include src/update/tests/CMakeFiles/update_test.dir/flags.make

src/update/tests/update_test_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/update/tests/update_test_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/update/tests/update_test_autogen/timestamp: src/update/tests/CMakeFiles/update_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target update_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests/CMakeFiles/update_test_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests/update_test_autogen/timestamp

src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o: src/update/tests/CMakeFiles/update_test.dir/flags.make
src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o: src/update/tests/update_test_autogen/mocs_compilation.cpp
src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o: src/update/tests/CMakeFiles/update_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests/update_test_autogen/mocs_compilation.cpp

src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests/update_test_autogen/mocs_compilation.cpp > CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.i

src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests/update_test_autogen/mocs_compilation.cpp -o CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.s

src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o: src/update/tests/CMakeFiles/update_test.dir/flags.make
src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o: src/update/tests/CMakeFiles/update_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o -MF CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o.d -o CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.i

src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.s

src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o: src/update/tests/CMakeFiles/update_test.dir/flags.make
src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o: src/update/tests/CMakeFiles/update_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o -MF CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o.d -o CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.i

src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.s

src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.o: src/update/tests/CMakeFiles/update_test.dir/flags.make
src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.o: /Users/andresgarcia/MuseScore/src/update/tests/updateservice_tests.cpp
src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.o: src/update/tests/CMakeFiles/update_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.o -MF CMakeFiles/update_test.dir/updateservice_tests.cpp.o.d -o CMakeFiles/update_test.dir/updateservice_tests.cpp.o -c /Users/andresgarcia/MuseScore/src/update/tests/updateservice_tests.cpp

src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/update_test.dir/updateservice_tests.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/update/tests/updateservice_tests.cpp > CMakeFiles/update_test.dir/updateservice_tests.cpp.i

src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/update_test.dir/updateservice_tests.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/update/tests/updateservice_tests.cpp -o CMakeFiles/update_test.dir/updateservice_tests.cpp.s

# Object files for target update_test
update_test_OBJECTS = \
"CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o" \
"CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o" \
"CMakeFiles/update_test.dir/updateservice_tests.cpp.o"

# External object files for target update_test
update_test_EXTERNAL_OBJECTS =

src/update/tests/update_test: src/update/tests/CMakeFiles/update_test.dir/update_test_autogen/mocs_compilation.cpp.o
src/update/tests/update_test: src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/gmain.cpp.o
src/update/tests/update_test: src/update/tests/CMakeFiles/update_test.dir/__/__/framework/testing/environment.cpp.o
src/update/tests/update_test: src/update/tests/CMakeFiles/update_test.dir/updateservice_tests.cpp.o
src/update/tests/update_test: src/update/tests/CMakeFiles/update_test.dir/build.make
src/update/tests/update_test: lib/libgmock.a
src/update/tests/update_test: src/framework/global/libglobal.a
src/update/tests/update_test: src/update/libupdate.a
src/update/tests/update_test: lib/libgtest.a
src/update/tests/update_test: src/framework/global/libglobal.a
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtNetworkAuth.framework/QtNetworkAuth
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtQuickControls2.framework/QtQuickControls2
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtQuickTemplates2.framework/QtQuickTemplates2
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtQuickWidgets.framework/QtQuickWidgets
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtQuick.framework/QtQuick
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtQmlModels.framework/QtQmlModels
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtQml.framework/QtQml
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtXml.framework/QtXml
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtXmlPatterns.framework/QtXmlPatterns
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtNetwork.framework/QtNetwork
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtSvg.framework/QtSvg
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtPrintSupport.framework/QtPrintSupport
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtOpenGL.framework/QtOpenGL
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtWidgets.framework/QtWidgets
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtGui.framework/QtGui
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtConcurrent.framework/QtConcurrent
src/update/tests/update_test: /usr/local/opt/qt@5/lib/QtCore.framework/QtCore
src/update/tests/update_test: src/update/tests/CMakeFiles/update_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable update_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/update_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/update/tests/CMakeFiles/update_test.dir/build: src/update/tests/update_test
.PHONY : src/update/tests/CMakeFiles/update_test.dir/build

src/update/tests/CMakeFiles/update_test.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests && $(CMAKE_COMMAND) -P CMakeFiles/update_test.dir/cmake_clean.cmake
.PHONY : src/update/tests/CMakeFiles/update_test.dir/clean

src/update/tests/CMakeFiles/update_test.dir/depend: src/update/tests/update_test_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/update/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/update/tests/CMakeFiles/update_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/update/tests/CMakeFiles/update_test.dir/depend

