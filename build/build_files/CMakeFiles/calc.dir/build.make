# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files

# Include any dependencies generated for this target.
include CMakeFiles/calc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calc.dir/flags.make

CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o: calc_autogen/mocs_compilation.cpp
CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o -MF CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o -c /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/calc_autogen/mocs_compilation.cpp

CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/calc_autogen/mocs_compilation.cpp > CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.i

CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/calc_autogen/mocs_compilation.cpp -o CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.s

CMakeFiles/calc.dir/polish/polish_notation.c.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/polish/polish_notation.c.o: /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/polish_notation.c
CMakeFiles/calc.dir/polish/polish_notation.c.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/calc.dir/polish/polish_notation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/calc.dir/polish/polish_notation.c.o -MF CMakeFiles/calc.dir/polish/polish_notation.c.o.d -o CMakeFiles/calc.dir/polish/polish_notation.c.o -c /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/polish_notation.c

CMakeFiles/calc.dir/polish/polish_notation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/calc.dir/polish/polish_notation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/polish_notation.c > CMakeFiles/calc.dir/polish/polish_notation.c.i

CMakeFiles/calc.dir/polish/polish_notation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/calc.dir/polish/polish_notation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/polish_notation.c -o CMakeFiles/calc.dir/polish/polish_notation.c.s

CMakeFiles/calc.dir/polish/data_structures.c.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/polish/data_structures.c.o: /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/data_structures.c
CMakeFiles/calc.dir/polish/data_structures.c.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/calc.dir/polish/data_structures.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/calc.dir/polish/data_structures.c.o -MF CMakeFiles/calc.dir/polish/data_structures.c.o.d -o CMakeFiles/calc.dir/polish/data_structures.c.o -c /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/data_structures.c

CMakeFiles/calc.dir/polish/data_structures.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/calc.dir/polish/data_structures.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/data_structures.c > CMakeFiles/calc.dir/polish/data_structures.c.i

CMakeFiles/calc.dir/polish/data_structures.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/calc.dir/polish/data_structures.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/polish/data_structures.c -o CMakeFiles/calc.dir/polish/data_structures.c.s

CMakeFiles/calc.dir/main.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/main.cpp.o: /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/main.cpp
CMakeFiles/calc.dir/main.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/calc.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/main.cpp.o -MF CMakeFiles/calc.dir/main.cpp.o.d -o CMakeFiles/calc.dir/main.cpp.o -c /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/main.cpp

CMakeFiles/calc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/main.cpp > CMakeFiles/calc.dir/main.cpp.i

CMakeFiles/calc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/main.cpp -o CMakeFiles/calc.dir/main.cpp.s

CMakeFiles/calc.dir/graph.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/graph.cpp.o: /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/graph.cpp
CMakeFiles/calc.dir/graph.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/calc.dir/graph.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/graph.cpp.o -MF CMakeFiles/calc.dir/graph.cpp.o.d -o CMakeFiles/calc.dir/graph.cpp.o -c /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/graph.cpp

CMakeFiles/calc.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/graph.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/graph.cpp > CMakeFiles/calc.dir/graph.cpp.i

CMakeFiles/calc.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/graph.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/graph.cpp -o CMakeFiles/calc.dir/graph.cpp.s

CMakeFiles/calc.dir/mainwindow.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/mainwindow.cpp.o: /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/mainwindow.cpp
CMakeFiles/calc.dir/mainwindow.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/calc.dir/mainwindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/mainwindow.cpp.o -MF CMakeFiles/calc.dir/mainwindow.cpp.o.d -o CMakeFiles/calc.dir/mainwindow.cpp.o -c /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/mainwindow.cpp

CMakeFiles/calc.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/mainwindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/mainwindow.cpp > CMakeFiles/calc.dir/mainwindow.cpp.i

CMakeFiles/calc.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/mainwindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/mainwindow.cpp -o CMakeFiles/calc.dir/mainwindow.cpp.s

CMakeFiles/calc.dir/qcustomplot.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/qcustomplot.cpp.o: /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/qcustomplot.cpp
CMakeFiles/calc.dir/qcustomplot.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/calc.dir/qcustomplot.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/qcustomplot.cpp.o -MF CMakeFiles/calc.dir/qcustomplot.cpp.o.d -o CMakeFiles/calc.dir/qcustomplot.cpp.o -c /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/qcustomplot.cpp

CMakeFiles/calc.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/qcustomplot.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/qcustomplot.cpp > CMakeFiles/calc.dir/qcustomplot.cpp.i

CMakeFiles/calc.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/qcustomplot.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc/qcustomplot.cpp -o CMakeFiles/calc.dir/qcustomplot.cpp.s

# Object files for target calc
calc_OBJECTS = \
"CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calc.dir/polish/polish_notation.c.o" \
"CMakeFiles/calc.dir/polish/data_structures.c.o" \
"CMakeFiles/calc.dir/main.cpp.o" \
"CMakeFiles/calc.dir/graph.cpp.o" \
"CMakeFiles/calc.dir/mainwindow.cpp.o" \
"CMakeFiles/calc.dir/qcustomplot.cpp.o"

# External object files for target calc
calc_EXTERNAL_OBJECTS =

calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/polish/polish_notation.c.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/polish/data_structures.c.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/main.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/graph.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/mainwindow.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/qcustomplot.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/build.make
calc.app/Contents/MacOS/calc: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
calc.app/Contents/MacOS/calc: /usr/local/lib/QtGui.framework/Versions/A/QtGui
calc.app/Contents/MacOS/calc: /usr/local/lib/QtCore.framework/Versions/A/QtCore
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable calc.app/Contents/MacOS/calc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calc.dir/build: calc.app/Contents/MacOS/calc
.PHONY : CMakeFiles/calc.dir/build

CMakeFiles/calc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calc.dir/clean

CMakeFiles/calc.dir/depend:
	cd /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc /Users/sirenash/C7_SmartCalc_v1.0-1/src/calc /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files /Users/sirenash/C7_SmartCalc_v1.0-1/build/build_files/CMakeFiles/calc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calc.dir/depend

