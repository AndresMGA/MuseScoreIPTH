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
include src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/flags.make

src/framework/accessibility/tests/muse_accessibility_tests_autogen/timestamp: /usr/local/share/qt/libexec/moc
src/framework/accessibility/tests/muse_accessibility_tests_autogen/timestamp: /usr/local/share/qt/libexec/uic
src/framework/accessibility/tests/muse_accessibility_tests_autogen/timestamp: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target muse_accessibility_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests/muse_accessibility_tests_autogen/timestamp

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/flags.make
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o: src/framework/accessibility/tests/muse_accessibility_tests_autogen/mocs_compilation.cpp
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o -MF CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests/muse_accessibility_tests_autogen/mocs_compilation.cpp

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests/muse_accessibility_tests_autogen/mocs_compilation.cpp > CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.i

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests/muse_accessibility_tests_autogen/mocs_compilation.cpp -o CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.s

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/flags.make
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o -MF CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o.d -o CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.i

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.s

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/flags.make
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o -MF CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o.d -o CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.i

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.s

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/flags.make
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/environment.cpp
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o -MF CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o.d -o CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/environment.cpp

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_accessibility_tests.dir/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/environment.cpp > CMakeFiles/muse_accessibility_tests.dir/environment.cpp.i

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_accessibility_tests.dir/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/environment.cpp -o CMakeFiles/muse_accessibility_tests.dir/environment.cpp.s

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/flags.make
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o: /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/accessibilitycontroller_tests.cpp
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o -MF CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o.d -o CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/accessibilitycontroller_tests.cpp

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/accessibilitycontroller_tests.cpp > CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.i

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/accessibility/tests/accessibilitycontroller_tests.cpp -o CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.s

# Object files for target muse_accessibility_tests
muse_accessibility_tests_OBJECTS = \
"CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o" \
"CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o" \
"CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o" \
"CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o"

# External object files for target muse_accessibility_tests
muse_accessibility_tests_EXTERNAL_OBJECTS =

src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/muse_accessibility_tests_autogen/mocs_compilation.cpp.o
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/gmain.cpp.o
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/__/__/testing/environment.cpp.o
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/environment.cpp.o
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/accessibilitycontroller_tests.cpp.o
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/build.make
src/framework/accessibility/tests/muse_accessibility_tests: lib/libgmock.a
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/global/libmuse_global.a
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/ui/libmuse_ui.a
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/libmuse_accessibility.a
src/framework/accessibility/tests/muse_accessibility_tests: lib/libgtest.a
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/global/libmuse_global.a
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtNetworkAuth.framework/Versions/A/QtNetworkAuth
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtQuickControls2.framework/Versions/A/QtQuickControls2
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtQuickTemplates2.framework/Versions/A/QtQuickTemplates2
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtQuickWidgets.framework/Versions/A/QtQuickWidgets
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtQuick.framework/Versions/A/QtQuick
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtQmlModels.framework/Versions/A/QtQmlModels
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtQml.framework/Versions/A/QtQml
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtNetwork.framework/Versions/A/QtNetwork
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/libQt6QmlBuiltins.a
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtXml.framework/Versions/A/QtXml
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtSvg.framework/Versions/A/QtSvg
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
src/framework/accessibility/tests/muse_accessibility_tests: /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/usr/lib/libcups.tbd
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtOpenGL.framework/Versions/A/QtOpenGL
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtCore5Compat.framework/Versions/A/QtCore5Compat
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtStateMachine.framework/Versions/A/QtStateMachine
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtGui.framework/Versions/A/QtGui
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtConcurrent.framework/Versions/A/QtConcurrent
src/framework/accessibility/tests/muse_accessibility_tests: /usr/local/lib/QtCore.framework/Versions/A/QtCore
src/framework/accessibility/tests/muse_accessibility_tests: src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable muse_accessibility_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muse_accessibility_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/build: src/framework/accessibility/tests/muse_accessibility_tests
.PHONY : src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/build

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests && $(CMAKE_COMMAND) -P CMakeFiles/muse_accessibility_tests.dir/cmake_clean.cmake
.PHONY : src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/clean

src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/depend: src/framework/accessibility/tests/muse_accessibility_tests_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/accessibility/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/accessibility/tests/CMakeFiles/muse_accessibility_tests.dir/depend

