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
include src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/flags.make

src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/shortcuts.qrc
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/qmldir
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/ShortcutsPage.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/EditShortcutDialog.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/Shortcuts.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/data/shortcuts.xml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/data/shortcuts_AZERTY.xml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/data/shortcuts-Mac.xml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/EditMidiMappingDialog.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/MidiDeviceMappingPage.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/internal/ShortcutsTopPanel.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/internal/ShortcutsList.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/internal/ShortcutsBottomPanel.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/internal/MidiMappingTopPanel.qml
src/framework/shortcuts/qrc_shortcuts.cpp: /Users/andresgarcia/MuseScore/src/framework/shortcuts/qml/Muse/Shortcuts/internal/MidiMappingBottomPanel.qml
src/framework/shortcuts/qrc_shortcuts.cpp: src/framework/shortcuts/shortcuts.qrc.depends
src/framework/shortcuts/qrc_shortcuts.cpp: /usr/local/opt/qt/share/qt/libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_shortcuts.cpp"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /usr/local/opt/qt/share/qt/libexec/rcc --name shortcuts --output /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/qrc_shortcuts.cpp /Users/andresgarcia/MuseScore/src/framework/shortcuts/shortcuts.qrc

src/framework/shortcuts/muse_shortcuts_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/moc
src/framework/shortcuts/muse_shortcuts_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/uic
src/framework/shortcuts/muse_shortcuts_autogen/timestamp: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic MOC and UIC for target muse_shortcuts"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/CMakeFiles/muse_shortcuts_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/muse_shortcuts_autogen/timestamp

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/flags.make
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -MD -MT src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx > CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.i

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.s

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/flags.make
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o: src/framework/shortcuts/qrc_shortcuts.cpp
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o -MF CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o.d -o CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/qrc_shortcuts.cpp

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/qrc_shortcuts.cpp > CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.i

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/qrc_shortcuts.cpp -o CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.s

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/flags.make
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o: /Users/andresgarcia/MuseScore/src/framework/shortcuts/internal/platform/macos/macosshortcutsinstancemodel.mm
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o -MF CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o.d -o CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o -c /Users/andresgarcia/MuseScore/src/framework/shortcuts/internal/platform/macos/macosshortcutsinstancemodel.mm

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/shortcuts/internal/platform/macos/macosshortcutsinstancemodel.mm > CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.i

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/shortcuts/internal/platform/macos/macosshortcutsinstancemodel.mm -o CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.s

# Object files for target muse_shortcuts
muse_shortcuts_OBJECTS = \
"CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o" \
"CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o" \
"CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o"

# External object files for target muse_shortcuts
muse_shortcuts_EXTERNAL_OBJECTS =

src/framework/shortcuts/libmuse_shortcuts.a: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/Unity/unity_0_cxx.cxx.o
src/framework/shortcuts/libmuse_shortcuts.a: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/qrc_shortcuts.cpp.o
src/framework/shortcuts/libmuse_shortcuts.a: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/internal/platform/macos/macosshortcutsinstancemodel.mm.o
src/framework/shortcuts/libmuse_shortcuts.a: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/build.make
src/framework/shortcuts/libmuse_shortcuts.a: src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libmuse_shortcuts.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && $(CMAKE_COMMAND) -P CMakeFiles/muse_shortcuts.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muse_shortcuts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/build: src/framework/shortcuts/libmuse_shortcuts.a
.PHONY : src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/build

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts && $(CMAKE_COMMAND) -P CMakeFiles/muse_shortcuts.dir/cmake_clean.cmake
.PHONY : src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/clean

src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/depend: src/framework/shortcuts/muse_shortcuts_autogen/timestamp
src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/depend: src/framework/shortcuts/qrc_shortcuts.cpp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/shortcuts /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/shortcuts/CMakeFiles/muse_shortcuts.dir/depend

