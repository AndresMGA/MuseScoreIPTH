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
include src/learn/CMakeFiles/learn.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/learn/CMakeFiles/learn.dir/compiler_depend.make

# Include the progress variables for this target.
include src/learn/CMakeFiles/learn.dir/progress.make

# Include the compile flags for this target's objects.
include src/learn/CMakeFiles/learn.dir/flags.make

src/learn/qrc_learn.cpp: /Users/andresgarcia/MuseScore/src/learn/learn.qrc
src/learn/qrc_learn.cpp: /Users/andresgarcia/MuseScore/src/learn/qml/MuseScore/Learn/LearnPage.qml
src/learn/qrc_learn.cpp: /Users/andresgarcia/MuseScore/src/learn/qml/MuseScore/Learn/qmldir
src/learn/qrc_learn.cpp: /Users/andresgarcia/MuseScore/src/learn/qml/MuseScore/Learn/internal/Playlist.qml
src/learn/qrc_learn.cpp: /Users/andresgarcia/MuseScore/src/learn/qml/MuseScore/Learn/internal/PlaylistItem.qml
src/learn/qrc_learn.cpp: /Users/andresgarcia/MuseScore/src/learn/qml/MuseScore/Learn/internal/ClassesPage.qml
src/learn/qrc_learn.cpp: /Users/andresgarcia/MuseScore/src/learn/qml/MuseScore/Learn/resources/marc_sabatella.JPG
src/learn/qrc_learn.cpp: src/learn/learn.qrc.depends
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_learn.cpp"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && /usr/local/opt/qt@5/bin/rcc --name learn --output /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn/qrc_learn.cpp /Users/andresgarcia/MuseScore/src/learn/learn.qrc

src/learn/learn_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/learn/learn_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/learn/learn_autogen/timestamp: src/learn/CMakeFiles/learn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic MOC and UIC for target learn"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn/CMakeFiles/learn_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn/learn_autogen/timestamp

src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o: src/learn/CMakeFiles/learn.dir/flags.make
src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o: src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx
src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx
src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx.pch
src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o: src/learn/CMakeFiles/learn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -MD -MT src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx

src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx > CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.i

src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.s

# Object files for target learn
learn_OBJECTS = \
"CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o"

# External object files for target learn
learn_EXTERNAL_OBJECTS =

src/learn/liblearn.a: src/learn/CMakeFiles/learn.dir/Unity/unity_0_cxx.cxx.o
src/learn/liblearn.a: src/learn/CMakeFiles/learn.dir/build.make
src/learn/liblearn.a: src/learn/CMakeFiles/learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library liblearn.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && $(CMAKE_COMMAND) -P CMakeFiles/learn.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/learn/CMakeFiles/learn.dir/build: src/learn/liblearn.a
.PHONY : src/learn/CMakeFiles/learn.dir/build

src/learn/CMakeFiles/learn.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn && $(CMAKE_COMMAND) -P CMakeFiles/learn.dir/cmake_clean.cmake
.PHONY : src/learn/CMakeFiles/learn.dir/clean

src/learn/CMakeFiles/learn.dir/depend: src/learn/learn_autogen/timestamp
src/learn/CMakeFiles/learn.dir/depend: src/learn/qrc_learn.cpp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/learn /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/learn/CMakeFiles/learn.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/learn/CMakeFiles/learn.dir/depend

