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
include src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/progress.make

# Include the compile flags for this target's objects.
include src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make

src/importexport/capella/tests/iex_capella_tests_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/moc
src/importexport/capella/tests/iex_capella_tests_autogen/timestamp: /usr/local/opt/qt/share/qt/libexec/uic
src/importexport/capella/tests/iex_capella_tests_autogen/timestamp: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target iex_capella_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E cmake_autogen /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests/CMakeFiles/iex_capella_tests_autogen.dir/AutogenInfo.json RELEASE
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /usr/local/Cellar/cmake/3.29.5/bin/cmake -E touch /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests/iex_capella_tests_autogen/timestamp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o: src/importexport/capella/tests/iex_capella_tests_autogen/mocs_compilation.cpp
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o -MF CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o -c /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests/iex_capella_tests_autogen/mocs_compilation.cpp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests/iex_capella_tests_autogen/mocs_compilation.cpp > CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.i

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests/iex_capella_tests_autogen/mocs_compilation.cpp -o CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.s

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o -MF CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o.d -o CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp > CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.i

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/gmain.cpp -o CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.s

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o: /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o -MF CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o.d -o CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp > CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.i

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/framework/testing/environment.cpp -o CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.s

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o: /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o -MF CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o.d -o CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o -c /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp > CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.i

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorerw.cpp -o CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.s

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o: /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o -MF CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o.d -o CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o -c /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp > CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.i

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/engraving/tests/utils/scorecomp.cpp -o CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.s

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.o: /Users/andresgarcia/MuseScore/src/importexport/capella/tests/environment.cpp
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.o -MF CMakeFiles/iex_capella_tests.dir/environment.cpp.o.d -o CMakeFiles/iex_capella_tests.dir/environment.cpp.o -c /Users/andresgarcia/MuseScore/src/importexport/capella/tests/environment.cpp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella_tests.dir/environment.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/importexport/capella/tests/environment.cpp > CMakeFiles/iex_capella_tests.dir/environment.cpp.i

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella_tests.dir/environment.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/importexport/capella/tests/environment.cpp -o CMakeFiles/iex_capella_tests.dir/environment.cpp.s

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/flags.make
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o: /Users/andresgarcia/MuseScore/src/importexport/capella/tests/capella_tests.cpp
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o -MF CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o.d -o CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o -c /Users/andresgarcia/MuseScore/src/importexport/capella/tests/capella_tests.cpp

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.i"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresgarcia/MuseScore/src/importexport/capella/tests/capella_tests.cpp > CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.i

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.s"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresgarcia/MuseScore/src/importexport/capella/tests/capella_tests.cpp -o CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.s

# Object files for target iex_capella_tests
iex_capella_tests_OBJECTS = \
"CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o" \
"CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o" \
"CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o" \
"CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o" \
"CMakeFiles/iex_capella_tests.dir/environment.cpp.o" \
"CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o"

# External object files for target iex_capella_tests
iex_capella_tests_EXTERNAL_OBJECTS =

src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/iex_capella_tests_autogen/mocs_compilation.cpp.o
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/gmain.cpp.o
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/framework/testing/environment.cpp.o
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorerw.cpp.o
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/__/__/__/engraving/tests/utils/scorecomp.cpp.o
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/environment.cpp.o
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/capella_tests.cpp.o
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/build.make
src/importexport/capella/tests/iex_capella_tests: lib/libgmock.a
src/importexport/capella/tests/iex_capella_tests: src/framework/global/libmuse_global.a
src/importexport/capella/tests/iex_capella_tests: src/engraving/libengraving.a
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/libiex_capella.a
src/importexport/capella/tests/iex_capella_tests: lib/libgtest.a
src/importexport/capella/tests/iex_capella_tests: src/engraving/libengraving.a
src/importexport/capella/tests/iex_capella_tests: src/framework/draw/libmuse_draw.a
src/importexport/capella/tests/iex_capella_tests: src/framework/draw/freetype/libfreetype.a
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/rtf2html/librtf2html.a
src/importexport/capella/tests/iex_capella_tests: src/framework/global/libmuse_global.a
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtNetworkAuth.framework/Versions/A/QtNetworkAuth
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtQuickControls2.framework/Versions/A/QtQuickControls2
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtQuickTemplates2.framework/Versions/A/QtQuickTemplates2
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtQuickWidgets.framework/Versions/A/QtQuickWidgets
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtQuick.framework/Versions/A/QtQuick
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtQmlModels.framework/Versions/A/QtQmlModels
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtQml.framework/Versions/A/QtQml
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtNetwork.framework/Versions/A/QtNetwork
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/libQt6QmlBuiltins.a
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtXml.framework/Versions/A/QtXml
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtSvg.framework/Versions/A/QtSvg
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtWidgets.framework/Versions/A/QtWidgets
src/importexport/capella/tests/iex_capella_tests: /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/usr/lib/libcups.tbd
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtOpenGL.framework/Versions/A/QtOpenGL
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtCore5Compat.framework/Versions/A/QtCore5Compat
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtStateMachine.framework/Versions/A/QtStateMachine
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtGui.framework/Versions/A/QtGui
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtConcurrent.framework/Versions/A/QtConcurrent
src/importexport/capella/tests/iex_capella_tests: /usr/local/opt/qt/lib/QtCore.framework/Versions/A/QtCore
src/importexport/capella/tests/iex_capella_tests: src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable iex_capella_tests"
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iex_capella_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/build: src/importexport/capella/tests/iex_capella_tests
.PHONY : src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/build

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/clean:
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests && $(CMAKE_COMMAND) -P CMakeFiles/iex_capella_tests.dir/cmake_clean.cmake
.PHONY : src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/clean

src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/depend: src/importexport/capella/tests/iex_capella_tests_autogen/timestamp
	cd /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresgarcia/MuseScore /Users/andresgarcia/MuseScore/src/importexport/capella/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests /Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/importexport/capella/tests/CMakeFiles/iex_capella_tests.dir/depend

