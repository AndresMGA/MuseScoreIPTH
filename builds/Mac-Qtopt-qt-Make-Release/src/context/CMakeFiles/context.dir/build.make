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
include src/context/CMakeFiles/context.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/context/CMakeFiles/context.dir/compiler_depend.make

# Include the progress variables for this target.
include src/context/CMakeFiles/context.dir/progress.make

# Include the compile flags for this target's objects.
include src/context/CMakeFiles/context.dir/flags.make

src/context/context_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/moc
src/context/context_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/uic
src/context/context_autogen/timestamp: src/context/CMakeFiles/context.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target context"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context/CMakeFiles/context_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context/context_autogen/timestamp

src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o: src/context/CMakeFiles/context.dir/flags.make
src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o: src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx
src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx
src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch
src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o: src/context/CMakeFiles/context.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -MD -MT src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx

src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx > CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.i

src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.s

# Object files for target context
context_OBJECTS = \
"CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o"

# External object files for target context
context_EXTERNAL_OBJECTS =

src/context/libcontext.a: src/context/CMakeFiles/context.dir/Unity/unity_0_cxx.cxx.o
src/context/libcontext.a: src/context/CMakeFiles/context.dir/build.make
src/context/libcontext.a: src/context/CMakeFiles/context.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libcontext.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && $(CMAKE_COMMAND) -P CMakeFiles/context.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/context.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/context/CMakeFiles/context.dir/build: src/context/libcontext.a
.PHONY : src/context/CMakeFiles/context.dir/build

src/context/CMakeFiles/context.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context && $(CMAKE_COMMAND) -P CMakeFiles/context.dir/cmake_clean.cmake
.PHONY : src/context/CMakeFiles/context.dir/clean

src/context/CMakeFiles/context.dir/depend: src/context/context_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/context /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/context/CMakeFiles/context.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/context/CMakeFiles/context.dir/depend

