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
include src/framework/ui/tests/CMakeFiles/ui_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/ui/tests/CMakeFiles/ui_tests.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/ui/tests/CMakeFiles/ui_tests.dir/flags.make

src/framework/ui/tests/ui_tests_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/framework/ui/tests/ui_tests_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/framework/ui/tests/ui_tests_autogen/timestamp: src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target ui_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests/CMakeFiles/ui_tests_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests/ui_tests_autogen/timestamp

src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/flags.make
src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o: src/framework/ui/tests/ui_tests_autogen/mocs_compilation.cpp
src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests/ui_tests_autogen/mocs_compilation.cpp

src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests/ui_tests_autogen/mocs_compilation.cpp > CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.i

src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests/ui_tests_autogen/mocs_compilation.cpp -o CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.s

src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/flags.make
src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o -MF CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o.d -o CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.i

src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.s

src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/flags.make
src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o -MF CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o.d -o CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.i

src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.s

src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/flags.make
src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/ui/tests/environment.cpp
src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.o -MF CMakeFiles/ui_tests.dir/environment.cpp.o.d -o CMakeFiles/ui_tests.dir/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/ui/tests/environment.cpp

src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ui_tests.dir/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/ui/tests/environment.cpp > CMakeFiles/ui_tests.dir/environment.cpp.i

src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ui_tests.dir/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/ui/tests/environment.cpp -o CMakeFiles/ui_tests.dir/environment.cpp.s

src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/flags.make
src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o: /Users/andresgarcia/MuseScore/src/framework/ui/tests/navigationcontroller_tests.cpp
src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o -MF CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o.d -o CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/ui/tests/navigationcontroller_tests.cpp

src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/ui/tests/navigationcontroller_tests.cpp > CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.i

src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/ui/tests/navigationcontroller_tests.cpp -o CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.s

src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/flags.make
src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o: /Users/andresgarcia/MuseScore/src/framework/ui/tests/qmltooltip_tests.cpp
src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o: src/framework/ui/tests/CMakeFiles/ui_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o -MF CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o.d -o CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/ui/tests/qmltooltip_tests.cpp

src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/ui/tests/qmltooltip_tests.cpp > CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.i

src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/ui/tests/qmltooltip_tests.cpp -o CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.s

# Object files for target ui_tests
ui_tests_OBJECTS = \
"CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o" \
"CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o" \
"CMakeFiles/ui_tests.dir/environment.cpp.o" \
"CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o" \
"CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o"

# External object files for target ui_tests
ui_tests_EXTERNAL_OBJECTS =

src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/ui_tests_autogen/mocs_compilation.cpp.o
src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/gmain.cpp.o
src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/__/__/testing/environment.cpp.o
src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/environment.cpp.o
src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/navigationcontroller_tests.cpp.o
src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/qmltooltip_tests.cpp.o
src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/build.make
src/framework/ui/tests/ui_tests: lib/libgmock.a
src/framework/ui/tests/ui_tests: src/framework/global/libglobal.a
src/framework/ui/tests/ui_tests: src/framework/actions/libactions.a
src/framework/ui/tests/ui_tests: src/framework/ui/libui.a
src/framework/ui/tests/ui_tests: lib/libgtest.a
src/framework/ui/tests/ui_tests: src/framework/accessibility/libaccessibility.a
src/framework/ui/tests/ui_tests: src/framework/global/libglobal.a
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtNetworkAuth.framework/QtNetworkAuth
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtQuickControls2.framework/QtQuickControls2
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtQuickTemplates2.framework/QtQuickTemplates2
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtQuickWidgets.framework/QtQuickWidgets
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtQuick.framework/QtQuick
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtQmlModels.framework/QtQmlModels
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtQml.framework/QtQml
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtXml.framework/QtXml
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtXmlPatterns.framework/QtXmlPatterns
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtNetwork.framework/QtNetwork
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtSvg.framework/QtSvg
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtPrintSupport.framework/QtPrintSupport
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtOpenGL.framework/QtOpenGL
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtWidgets.framework/QtWidgets
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtGui.framework/QtGui
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtConcurrent.framework/QtConcurrent
src/framework/ui/tests/ui_tests: /usr/local/opt/qt@5/lib/QtCore.framework/QtCore
src/framework/ui/tests/ui_tests: src/framework/ui/tests/CMakeFiles/ui_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ui_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ui_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/ui/tests/CMakeFiles/ui_tests.dir/build: src/framework/ui/tests/ui_tests
.PHONY : src/framework/ui/tests/CMakeFiles/ui_tests.dir/build

src/framework/ui/tests/CMakeFiles/ui_tests.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests && $(CMAKE_COMMAND) -P CMakeFiles/ui_tests.dir/cmake_clean.cmake
.PHONY : src/framework/ui/tests/CMakeFiles/ui_tests.dir/clean

src/framework/ui/tests/CMakeFiles/ui_tests.dir/depend: src/framework/ui/tests/ui_tests_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/ui/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/ui/tests/CMakeFiles/ui_tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/ui/tests/CMakeFiles/ui_tests.dir/depend

