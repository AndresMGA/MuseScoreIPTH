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
include src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/flags.make

src/framework/audio/tests/muse_audio_test_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/moc
src/framework/audio/tests/muse_audio_test_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/uic
src/framework/audio/tests/muse_audio_test_autogen/timestamp: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target muse_audio_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests/CMakeFiles/muse_audio_test_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests/muse_audio_test_autogen/timestamp

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o: src/framework/audio/tests/muse_audio_test_autogen/mocs_compilation.cpp
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests/muse_audio_test_autogen/mocs_compilation.cpp

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests/muse_audio_test_autogen/mocs_compilation.cpp > CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.i

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests/muse_audio_test_autogen/mocs_compilation.cpp -o CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.s

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o -MF CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o.d -o CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.i

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.s

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o -MF CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o.d -o CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.i

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.s

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o: /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o -MF CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o.d -o CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp > CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.i

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/audio/tests/knownaudiopluginsregistertest.cpp -o CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.s

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o: /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o -MF CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o.d -o CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp > CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.i

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/audio/tests/registeraudiopluginsscenariotest.cpp -o CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.s

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/flags.make
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o: /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o -MF CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o.d -o CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp > CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.i

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/audio/tests/audioutilstest.cpp -o CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.s

# Object files for target muse_audio_test
muse_audio_test_OBJECTS = \
"CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o" \
"CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o" \
"CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o" \
"CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o" \
"CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o"

# External object files for target muse_audio_test
muse_audio_test_EXTERNAL_OBJECTS =

src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/muse_audio_test_autogen/mocs_compilation.cpp.o
src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/gmain.cpp.o
src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/__/__/testing/environment.cpp.o
src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/knownaudiopluginsregistertest.cpp.o
src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/registeraudiopluginsscenariotest.cpp.o
src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/audioutilstest.cpp.o
src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/build.make
src/framework/audio/tests/muse_audio_test: lib/libgmock.a
src/framework/audio/tests/muse_audio_test: src/framework/global/libmuse_global.a
src/framework/audio/tests/muse_audio_test: src/framework/audio/libmuse_audio.a
src/framework/audio/tests/muse_audio_test: lib/libgtest.a
src/framework/audio/tests/muse_audio_test: src/framework/audio/fluidsynth/libfluidsynth.a
src/framework/audio/tests/muse_audio_test: /usr/local/Cellar/libsndfile/1.2.2/lib/libsndfile.dylib
src/framework/audio/tests/muse_audio_test: src/framework/audio/lame/liblame.a
src/framework/audio/tests/muse_audio_test: src/framework/audio/opusenc/libopusenc.a
src/framework/audio/tests/muse_audio_test: src/framework/audio/opusenc/opus/libopus.a
src/framework/audio/tests/muse_audio_test: src/framework/audio/flac/libflac.a
src/framework/audio/tests/muse_audio_test: src/framework/global/libmuse_global.a
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtNetworkAuth.framework/Versions/A/QtNetworkAuth
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtQuickControls2.framework/Versions/A/QtQuickControls2
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtQuickTemplates2.framework/Versions/A/QtQuickTemplates2
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtQuickWidgets.framework/Versions/A/QtQuickWidgets
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtQuick.framework/Versions/A/QtQuick
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtQmlModels.framework/Versions/A/QtQmlModels
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtQml.framework/Versions/A/QtQml
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtNetwork.framework/Versions/A/QtNetwork
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/libQt6QmlBuiltins.a
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtXml.framework/Versions/A/QtXml
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtSvg.framework/Versions/A/QtSvg
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtWidgets.framework/Versions/A/QtWidgets
src/framework/audio/tests/muse_audio_test: /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/usr/lib/libcups.tbd
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtOpenGL.framework/Versions/A/QtOpenGL
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtCore5Compat.framework/Versions/A/QtCore5Compat
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtStateMachine.framework/Versions/A/QtStateMachine
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtGui.framework/Versions/A/QtGui
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtConcurrent.framework/Versions/A/QtConcurrent
src/framework/audio/tests/muse_audio_test: /usr/local/opt/qt/lib/QtCore.framework/Versions/A/QtCore
src/framework/audio/tests/muse_audio_test: src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable muse_audio_test"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muse_audio_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/build: src/framework/audio/tests/muse_audio_test
.PHONY : src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/build

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests && $(CMAKE_COMMAND) -P CMakeFiles/muse_audio_test.dir/cmake_clean.cmake
.PHONY : src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/clean

src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/depend: src/framework/audio/tests/muse_audio_test_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/audio/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/audio/tests/CMakeFiles/muse_audio_test.dir/depend

