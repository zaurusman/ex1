# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Yotam\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Yotam\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Yotam\CLionProjects\ex1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Yotam\CLionProjects\ex1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex1.dir/flags.make

CMakeFiles/ex1.dir/tests/RLEList_example_test.c.obj: CMakeFiles/ex1.dir/flags.make
CMakeFiles/ex1.dir/tests/RLEList_example_test.c.obj: CMakeFiles/ex1.dir/includes_C.rsp
CMakeFiles/ex1.dir/tests/RLEList_example_test.c.obj: ../tests/RLEList_example_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Yotam\CLionProjects\ex1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex1.dir/tests/RLEList_example_test.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ex1.dir\tests\RLEList_example_test.c.obj -c C:\Users\Yotam\CLionProjects\ex1\tests\RLEList_example_test.c

CMakeFiles/ex1.dir/tests/RLEList_example_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex1.dir/tests/RLEList_example_test.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Yotam\CLionProjects\ex1\tests\RLEList_example_test.c > CMakeFiles\ex1.dir\tests\RLEList_example_test.c.i

CMakeFiles/ex1.dir/tests/RLEList_example_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex1.dir/tests/RLEList_example_test.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Yotam\CLionProjects\ex1\tests\RLEList_example_test.c -o CMakeFiles\ex1.dir\tests\RLEList_example_test.c.s

CMakeFiles/ex1.dir/RLEList.c.obj: CMakeFiles/ex1.dir/flags.make
CMakeFiles/ex1.dir/RLEList.c.obj: CMakeFiles/ex1.dir/includes_C.rsp
CMakeFiles/ex1.dir/RLEList.c.obj: ../RLEList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Yotam\CLionProjects\ex1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ex1.dir/RLEList.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ex1.dir\RLEList.c.obj -c C:\Users\Yotam\CLionProjects\ex1\RLEList.c

CMakeFiles/ex1.dir/RLEList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex1.dir/RLEList.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Yotam\CLionProjects\ex1\RLEList.c > CMakeFiles\ex1.dir\RLEList.c.i

CMakeFiles/ex1.dir/RLEList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex1.dir/RLEList.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Yotam\CLionProjects\ex1\RLEList.c -o CMakeFiles\ex1.dir\RLEList.c.s

# Object files for target ex1
ex1_OBJECTS = \
"CMakeFiles/ex1.dir/tests/RLEList_example_test.c.obj" \
"CMakeFiles/ex1.dir/RLEList.c.obj"

# External object files for target ex1
ex1_EXTERNAL_OBJECTS =

ex1.exe: CMakeFiles/ex1.dir/tests/RLEList_example_test.c.obj
ex1.exe: CMakeFiles/ex1.dir/RLEList.c.obj
ex1.exe: CMakeFiles/ex1.dir/build.make
ex1.exe: CMakeFiles/ex1.dir/linklibs.rsp
ex1.exe: CMakeFiles/ex1.dir/objects1.rsp
ex1.exe: CMakeFiles/ex1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Yotam\CLionProjects\ex1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ex1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex1.dir/build: ex1.exe
.PHONY : CMakeFiles/ex1.dir/build

CMakeFiles/ex1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex1.dir/clean

CMakeFiles/ex1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Yotam\CLionProjects\ex1 C:\Users\Yotam\CLionProjects\ex1 C:\Users\Yotam\CLionProjects\ex1\cmake-build-debug C:\Users\Yotam\CLionProjects\ex1\cmake-build-debug C:\Users\Yotam\CLionProjects\ex1\cmake-build-debug\CMakeFiles\ex1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex1.dir/depend

