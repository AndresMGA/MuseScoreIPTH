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
include src/framework/update/CMakeFiles/muse_update.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/update/CMakeFiles/muse_update.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/update/CMakeFiles/muse_update.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/update/CMakeFiles/muse_update.dir/flags.make

src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/update.qrc
src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/qml/Muse/Update/AppReleaseInfoDialog.qml
src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/qml/Muse/Update/UpdateProgressDialog.qml
src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/qml/Muse/Update/internal/AppReleaseInfoBottomPanel.qml
src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/qml/Muse/Update/internal/ReleaseNotesView.qml
src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/qml/Muse/Update/MuseSoundsReleaseInfoDialog.qml
src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/qml/Muse/Update/internal/MuseSoundsReleaseInfoBottomPanel.qml
src/framework/update/qrc_update.cpp: /Users/andresgarcia/MuseScore/src/framework/update/qml/Muse/Update/resources/muse_sounds_promo.png
src/framework/update/qrc_update.cpp: src/framework/update/update.qrc.depends
src/framework/update/qrc_update.cpp: /usr/local/share/qt/libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_update.cpp"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /usr/local/share/qt/libexec/rcc --name update --output /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/qrc_update.cpp /Users/andresgarcia/MuseScore/src/framework/update/update.qrc

src/framework/update/muse_update_autogen/timestamp: /usr/local/share/qt/libexec/moc
src/framework/update/muse_update_autogen/timestamp: /usr/local/share/qt/libexec/uic
src/framework/update/muse_update_autogen/timestamp: src/framework/update/CMakeFiles/muse_update.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic MOC and UIC for target muse_update"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/CMakeFiles/muse_update_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/muse_update_autogen/timestamp

src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o: src/framework/update/CMakeFiles/muse_update.dir/flags.make
src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o: src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx
src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx
src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch
src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o: src/framework/update/CMakeFiles/muse_update.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -MD -MT src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx

src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx > CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.i

src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.s

src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.o: src/framework/update/CMakeFiles/muse_update.dir/flags.make
src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.o: src/framework/update/qrc_update.cpp
src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.o: src/framework/update/CMakeFiles/muse_update.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.o -MF CMakeFiles/muse_update.dir/qrc_update.cpp.o.d -o CMakeFiles/muse_update.dir/qrc_update.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/qrc_update.cpp

src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_update.dir/qrc_update.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/qrc_update.cpp > CMakeFiles/muse_update.dir/qrc_update.cpp.i

src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_update.dir/qrc_update.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/qrc_update.cpp -o CMakeFiles/muse_update.dir/qrc_update.cpp.s

# Object files for target muse_update
muse_update_OBJECTS = \
"CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o" \
"CMakeFiles/muse_update.dir/qrc_update.cpp.o"

# External object files for target muse_update
muse_update_EXTERNAL_OBJECTS =

src/framework/update/libmuse_update.a: src/framework/update/CMakeFiles/muse_update.dir/Unity/unity_0_cxx.cxx.o
src/framework/update/libmuse_update.a: src/framework/update/CMakeFiles/muse_update.dir/qrc_update.cpp.o
src/framework/update/libmuse_update.a: src/framework/update/CMakeFiles/muse_update.dir/build.make
src/framework/update/libmuse_update.a: src/framework/update/CMakeFiles/muse_update.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libmuse_update.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && $(CMAKE_COMMAND) -P CMakeFiles/muse_update.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muse_update.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/update/CMakeFiles/muse_update.dir/build: src/framework/update/libmuse_update.a
.PHONY : src/framework/update/CMakeFiles/muse_update.dir/build

src/framework/update/CMakeFiles/muse_update.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update && $(CMAKE_COMMAND) -P CMakeFiles/muse_update.dir/cmake_clean.cmake
.PHONY : src/framework/update/CMakeFiles/muse_update.dir/clean

src/framework/update/CMakeFiles/muse_update.dir/depend: src/framework/update/muse_update_autogen/timestamp
src/framework/update/CMakeFiles/muse_update.dir/depend: src/framework/update/qrc_update.cpp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/update /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/update/CMakeFiles/muse_update.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/update/CMakeFiles/muse_update.dir/depend

