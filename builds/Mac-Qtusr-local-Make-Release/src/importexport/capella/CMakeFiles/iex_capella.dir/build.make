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
include src/importexport/capella/CMakeFiles/iex_capella.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/importexport/capella/CMakeFiles/iex_capella.dir/compiler_depend.make

# Include the progress variables for this target.
include src/importexport/capella/CMakeFiles/iex_capella.dir/progress.make

# Include the compile flags for this target's objects.
include src/importexport/capella/CMakeFiles/iex_capella.dir/flags.make

src/importexport/capella/iex_capella_autogen/timestamp: /usr/local/share/qt/libexec/moc
src/importexport/capella/iex_capella_autogen/timestamp: /usr/local/share/qt/libexec/uic
src/importexport/capella/iex_capella_autogen/timestamp: src/importexport/capella/CMakeFiles/iex_capella.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target iex_capella"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella/CMakeFiles/iex_capella_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella/iex_capella_autogen/timestamp

src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o: src/importexport/capella/CMakeFiles/iex_capella.dir/flags.make
src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o: src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx
src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx
src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o: src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch
src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o: src/importexport/capella/CMakeFiles/iex_capella.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -MD -MT src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o -MF CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o.d -o CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx

src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -E /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx > CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.i

src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xclang -include-pch -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch -Xclang -include -Xclang /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx -S /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx -o CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.s

# Object files for target iex_capella
iex_capella_OBJECTS = \
"CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o"

# External object files for target iex_capella
iex_capella_EXTERNAL_OBJECTS =

src/importexport/capella/libiex_capella.a: src/importexport/capella/CMakeFiles/iex_capella.dir/Unity/unity_0_cxx.cxx.o
src/importexport/capella/libiex_capella.a: src/importexport/capella/CMakeFiles/iex_capella.dir/build.make
src/importexport/capella/libiex_capella.a: src/importexport/capella/CMakeFiles/iex_capella.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libiex_capella.a"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && $(CMAKE_COMMAND) -P CMakeFiles/iex_capella.dir/cmake_clean_target.cmake
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iex_capella.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/importexport/capella/CMakeFiles/iex_capella.dir/build: src/importexport/capella/libiex_capella.a
.PHONY : src/importexport/capella/CMakeFiles/iex_capella.dir/build

src/importexport/capella/CMakeFiles/iex_capella.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella && $(CMAKE_COMMAND) -P CMakeFiles/iex_capella.dir/cmake_clean.cmake
.PHONY : src/importexport/capella/CMakeFiles/iex_capella.dir/clean

src/importexport/capella/CMakeFiles/iex_capella.dir/depend: src/importexport/capella/iex_capella_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/importexport/capella /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella /Users/andresgarcia/MuseScore/builds/Mac-Qtusr-local-Make-Release/src/importexport/capella/CMakeFiles/iex_capella.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/importexport/capella/CMakeFiles/iex_capella.dir/depend

