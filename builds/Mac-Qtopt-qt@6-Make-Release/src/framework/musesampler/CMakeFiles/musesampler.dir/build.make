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
include src/framework/musesampler/CMakeFiles/musesampler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/framework/musesampler/CMakeFiles/musesampler.dir/compiler_depend.make

# Include the progress variables for this target.
include src/framework/musesampler/CMakeFiles/musesampler.dir/progress.make

# Include the compile flags for this target's objects.
include src/framework/musesampler/CMakeFiles/musesampler.dir/flags.make

src/framework/musesampler/musesampler_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/framework/musesampler/musesampler_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/framework/musesampler/musesampler_autogen/timestamp: src/framework/musesampler/CMakeFiles/musesampler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target musesampler"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler/CMakeFiles/musesampler_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler/musesampler_autogen/timestamp

src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o: src/framework/musesampler/CMakeFiles/musesampler.dir/flags.make
src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o: src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx
src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx
src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx.pch
src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o: src/framework/musesampler/CMakeFiles/musesampler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -MD -MT src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx

src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx > CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.i

src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 -include/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global/CMakeFiles/global.dir/cmake_pch_x86_64.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.s

# Object files for target musesampler
musesampler_OBJECTS = \
"CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o"

# External object files for target musesampler
musesampler_EXTERNAL_OBJECTS =

src/framework/musesampler/libmusesampler.a: src/framework/musesampler/CMakeFiles/musesampler.dir/Unity/unity_0_cxx.cxx.o
src/framework/musesampler/libmusesampler.a: src/framework/musesampler/CMakeFiles/musesampler.dir/build.make
src/framework/musesampler/libmusesampler.a: src/framework/musesampler/CMakeFiles/musesampler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libmusesampler.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && $(CMAKE_COMMAND) -P CMakeFiles/musesampler.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/musesampler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/framework/musesampler/CMakeFiles/musesampler.dir/build: src/framework/musesampler/libmusesampler.a
.PHONY : src/framework/musesampler/CMakeFiles/musesampler.dir/build

src/framework/musesampler/CMakeFiles/musesampler.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler && $(CMAKE_COMMAND) -P CMakeFiles/musesampler.dir/cmake_clean.cmake
.PHONY : src/framework/musesampler/CMakeFiles/musesampler.dir/clean

src/framework/musesampler/CMakeFiles/musesampler.dir/depend: src/framework/musesampler/musesampler_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/framework/musesampler /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/musesampler/CMakeFiles/musesampler.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/framework/musesampler/CMakeFiles/musesampler.dir/depend

