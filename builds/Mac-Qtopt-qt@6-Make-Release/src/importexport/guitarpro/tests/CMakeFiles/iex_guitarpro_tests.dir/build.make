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
include src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/progress.make

# Include the compile flags for this target's objects.
include src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make

src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/timestamp: /usr/local/opt/qt@5/bin/moc
src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/timestamp: /usr/local/opt/qt@5/bin/uic
src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/timestamp: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target iex_guitarpro_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/timestamp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o: src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/mocs_compilation.cpp
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o -MF CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/mocs_compilation.cpp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/mocs_compilation.cpp > CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.i

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/mocs_compilation.cpp -o CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.s

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o -MF CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o.d -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.i

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.s

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o -MF CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o.d -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.i

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.s

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o: /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o -MF CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o.d -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o -c /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp > CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.i

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.s

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o: /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o -MF CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o.d -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o -c /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp > CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.i

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp -o CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.s

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o: /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/environment.cpp
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o -MF CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o.d -o CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/environment.cpp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/environment.cpp > CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.i

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/environment.cpp -o CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.s

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/flags.make
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o: /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/guitarpro_tests.cpp
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o -MF CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o.d -o CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o -c /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/guitarpro_tests.cpp

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/guitarpro_tests.cpp > CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.i

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests/guitarpro_tests.cpp -o CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.s

# Object files for target iex_guitarpro_tests
iex_guitarpro_tests_OBJECTS = \
"CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o" \
"CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o" \
"CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o" \
"CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o" \
"CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o" \
"CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o"

# External object files for target iex_guitarpro_tests
iex_guitarpro_tests_EXTERNAL_OBJECTS =

src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/iex_guitarpro_tests_autogen/mocs_compilation.cpp.o
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/gmain.cpp.o
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/framework/testing/environment.cpp.o
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/environment.cpp.o
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/guitarpro_tests.cpp.o
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/build.make
src/importexport/guitarpro/tests/iex_guitarpro_tests: lib/libgmock.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/framework/global/libglobal.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/framework/fonts/libfonts.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/engraving/libengraving.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/libiex_guitarpro.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: lib/libgtest.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/engraving/libengraving.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/framework/draw/libdraw.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/framework/draw/freetype/libfreetype.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/framework/global/libglobal.a
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtNetworkAuth.framework/QtNetworkAuth
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtQuickControls2.framework/QtQuickControls2
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtQuickTemplates2.framework/QtQuickTemplates2
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtQuickWidgets.framework/QtQuickWidgets
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtQuick.framework/QtQuick
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtQmlModels.framework/QtQmlModels
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtQml.framework/QtQml
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtXml.framework/QtXml
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtXmlPatterns.framework/QtXmlPatterns
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtNetwork.framework/QtNetwork
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtSvg.framework/QtSvg
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtPrintSupport.framework/QtPrintSupport
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtOpenGL.framework/QtOpenGL
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtWidgets.framework/QtWidgets
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtGui.framework/QtGui
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtConcurrent.framework/QtConcurrent
src/importexport/guitarpro/tests/iex_guitarpro_tests: /usr/local/opt/qt@5/lib/QtCore.framework/QtCore
src/importexport/guitarpro/tests/iex_guitarpro_tests: src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable iex_guitarpro_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iex_guitarpro_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/build: src/importexport/guitarpro/tests/iex_guitarpro_tests
.PHONY : src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/build

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests && $(CMAKE_COMMAND) -P CMakeFiles/iex_guitarpro_tests.dir/cmake_clean.cmake
.PHONY : src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/clean

src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/depend: src/importexport/guitarpro/tests/iex_guitarpro_tests_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/importexport/guitarpro/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/importexport/guitarpro/tests/CMakeFiles/iex_guitarpro_tests.dir/depend

