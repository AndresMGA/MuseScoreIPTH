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
include src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/flags.make

src/framework/multiinstances/qrc_multiinstances.cpp: /Users/andresgarcia/MuseScore/src/framework/multiinstances/multiinstances.qrc
src/framework/multiinstances/qrc_multiinstances.cpp: /Users/andresgarcia/MuseScore/src/framework/multiinstances/qml/Muse/MultiInstances/qmldir
src/framework/multiinstances/qrc_multiinstances.cpp: /Users/andresgarcia/MuseScore/src/framework/multiinstances/qml/Muse/MultiInstances/MultiInstancesDevDialog.qml
src/framework/multiinstances/qrc_multiinstances.cpp: /Users/andresgarcia/MuseScore/src/framework/multiinstances/qml/Muse/MultiInstances/MultiInstancesDevPanel.qml
src/framework/multiinstances/qrc_multiinstances.cpp: src/framework/multiinstances/multiinstances.qrc.depends
src/framework/multiinstances/qrc_multiinstances.cpp: /usr/local/share/qt/libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_multiinstances.cpp"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /usr/local/share/qt/libexec/rcc --name multiinstances --output /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/qrc_multiinstances.cpp /Users/andresgarcia/MuseScore/src/framework/multiinstances/multiinstances.qrc

src/framework/multiinstances/muse_multiinstances_autogen/timestamp: /usr/local/share/qt/libexec/moc
src/framework/multiinstances/muse_multiinstances_autogen/timestamp: /usr/local/share/qt/libexec/uic
src/framework/multiinstances/muse_multiinstances_autogen/timestamp: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic MOC and UIC for target muse_multiinstances"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/CMakeFiles/muse_multiinstances_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/muse_multiinstances_autogen/timestamp

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/flags.make
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -MD -MT src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx > CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.i

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.s

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/flags.make
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o: src/framework/multiinstances/qrc_multiinstances.cpp
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o -MF CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o.d -o CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/qrc_multiinstances.cpp

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/qrc_multiinstances.cpp > CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.i

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/qrc_multiinstances.cpp -o CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.s

# Object files for target muse_multiinstances
muse_multiinstances_OBJECTS = \
"CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o" \
"CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o"

# External object files for target muse_multiinstances
muse_multiinstances_EXTERNAL_OBJECTS =

src/framework/multiinstances/libmuse_multiinstances.a: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/Unity/unity_0_cxx.cxx.o
src/framework/multiinstances/libmuse_multiinstances.a: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/qrc_multiinstances.cpp.o
src/framework/multiinstances/libmuse_multiinstances.a: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/build.make
src/framework/multiinstances/libmuse_multiinstances.a: src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libmuse_multiinstances.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && $(CMAKE_COMMAND) -P CMakeFiles/muse_multiinstances.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/muse_multiinstances.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/build: src/framework/multiinstances/libmuse_multiinstances.a
.PHONY : src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/build

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances && $(CMAKE_COMMAND) -P CMakeFiles/muse_multiinstances.dir/cmake_clean.cmake
.PHONY : src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/clean

src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/depend: src/framework/multiinstances/muse_multiinstances_autogen/timestamp
src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/depend: src/framework/multiinstances/qrc_multiinstances.cpp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/multiinstances /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/multiinstances/CMakeFiles/muse_multiinstances.dir/depend

