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
include src/framework/audio/tests/CMakeFiles/audio_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/audio/tests/CMakeFiles/audio_test.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/audio/tests/CMakeFiles/audio_test.dir/flags.make

src/framework/audio/tests/audio_test_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/framework/audio/tests/audio_test_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/framework/audio/tests/audio_test_autogen/timestamp: src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target audio_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests/CMakeFiles/audio_test_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests/audio_test_autogen/timestamp

src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o: src/framework/audio/tests/audio_test_autogen/mocs_compilation.cpp
src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests/audio_test_autogen/mocs_compilation.cpp

src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests/audio_test_autogen/mocs_compilation.cpp > CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.i

src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests/audio_test_autogen/mocs_compilation.cpp -o CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.s

src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o -MF CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o.d -o CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.i

src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.s

src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o -MF CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o.d -o CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.i

src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.s

src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o: /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp
src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o -MF CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o.d -o CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp

src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp > CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.i

src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp -o CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.s

src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o: /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp
src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o -MF CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o.d -o CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp

src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp > CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.i

src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp -o CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.s

src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.o: /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp
src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.o: src/framework/audio/tests/CMakeFiles/audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.o -MF CMakeFiles/audio_test.dir/audioutilstest.cpp.o.d -o CMakeFiles/audio_test.dir/audioutilstest.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp

src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/audio_test.dir/audioutilstest.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp > CMakeFiles/audio_test.dir/audioutilstest.cpp.i

src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/audio_test.dir/audioutilstest.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp -o CMakeFiles/audio_test.dir/audioutilstest.cpp.s

# Object files for target audio_test
audio_test_OBJECTS = \
"CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o" \
"CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o" \
"CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o" \
"CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o" \
"CMakeFiles/audio_test.dir/audioutilstest.cpp.o"

# External object files for target audio_test
audio_test_EXTERNAL_OBJECTS =

src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/audio_test_autogen/mocs_compilation.cpp.o
src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/gmain.cpp.o
src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/__/__/testing/environment.cpp.o
src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/knownaudiopluginsregistertest.cpp.o
src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/registeraudiopluginsscenariotest.cpp.o
src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/audioutilstest.cpp.o
src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/build.make
src/framework/audio/tests/audio_test: lib/libgmock.a
src/framework/audio/tests/audio_test: src/framework/global/libglobal.a
src/framework/audio/tests/audio_test: src/framework/audio/libaudio.a
src/framework/audio/tests/audio_test: lib/libgtest.a
src/framework/audio/tests/audio_test: src/framework/audio/flac/libflac.a
src/framework/audio/tests/audio_test: src/framework/audio/lame/liblame.a
src/framework/audio/tests/audio_test: src/framework/audio/fluidsynth/libfluidsynth.a
src/framework/audio/tests/audio_test: /usr/local/Cellar/libsndfile/1.2.2/lib/libsndfile.dylib
src/framework/audio/tests/audio_test: src/framework/audio/opusenc/libopusenc.a
src/framework/audio/tests/audio_test: src/framework/global/libglobal.a
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtNetworkAuth.framework/QtNetworkAuth
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtQuickControls2.framework/QtQuickControls2
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtQuickTemplates2.framework/QtQuickTemplates2
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtQuickWidgets.framework/QtQuickWidgets
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtQuick.framework/QtQuick
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtQmlModels.framework/QtQmlModels
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtQml.framework/QtQml
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtXml.framework/QtXml
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtXmlPatterns.framework/QtXmlPatterns
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtNetwork.framework/QtNetwork
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtSvg.framework/QtSvg
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtPrintSupport.framework/QtPrintSupport
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtOpenGL.framework/QtOpenGL
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtWidgets.framework/QtWidgets
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtGui.framework/QtGui
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtConcurrent.framework/QtConcurrent
src/framework/audio/tests/audio_test: /usr/local/opt/qt@5/lib/QtCore.framework/QtCore
src/framework/audio/tests/audio_test: src/framework/audio/opusenc/opus/libopus.a
src/framework/audio/tests/audio_test: src/framework/audio/tests/CMakeFiles/audio_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable audio_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/audio_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/audio/tests/CMakeFiles/audio_test.dir/build: src/framework/audio/tests/audio_test
.PHONY : src/framework/audio/tests/CMakeFiles/audio_test.dir/build

src/framework/audio/tests/CMakeFiles/audio_test.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests && $(CMAKE_COMMAND) -P CMakeFiles/audio_test.dir/cmake_clean.cmake
.PHONY : src/framework/audio/tests/CMakeFiles/audio_test.dir/clean

src/framework/audio/tests/CMakeFiles/audio_test.dir/depend: src/framework/audio/tests/audio_test_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/audio/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/tests/CMakeFiles/audio_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/audio/tests/CMakeFiles/audio_test.dir/depend

