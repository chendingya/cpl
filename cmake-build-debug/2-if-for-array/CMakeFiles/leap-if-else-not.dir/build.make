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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\c-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-project\cmake-build-debug

# Include any dependencies generated for this target.
include 2-if-for-array/CMakeFiles/leap-if-else-not.dir/depend.make
# Include the progress variables for this target.
include 2-if-for-array/CMakeFiles/leap-if-else-not.dir/progress.make

# Include the compile flags for this target's objects.
include 2-if-for-array/CMakeFiles/leap-if-else-not.dir/flags.make

2-if-for-array/CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.obj: 2-if-for-array/CMakeFiles/leap-if-else-not.dir/flags.make
2-if-for-array/CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.obj: ../2-if-for-array/leap-if-else-not.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 2-if-for-array/CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.obj"
	cd /d E:\c-project\cmake-build-debug\2-if-for-array && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\leap-if-else-not.dir\leap-if-else-not.c.obj -c E:\c-project\2-if-for-array\leap-if-else-not.c

2-if-for-array/CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.i"
	cd /d E:\c-project\cmake-build-debug\2-if-for-array && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\2-if-for-array\leap-if-else-not.c > CMakeFiles\leap-if-else-not.dir\leap-if-else-not.c.i

2-if-for-array/CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.s"
	cd /d E:\c-project\cmake-build-debug\2-if-for-array && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\2-if-for-array\leap-if-else-not.c -o CMakeFiles\leap-if-else-not.dir\leap-if-else-not.c.s

# Object files for target leap-if-else-not
leap__if__else__not_OBJECTS = \
"CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.obj"

# External object files for target leap-if-else-not
leap__if__else__not_EXTERNAL_OBJECTS =

2-if-for-array/leap-if-else-not.exe: 2-if-for-array/CMakeFiles/leap-if-else-not.dir/leap-if-else-not.c.obj
2-if-for-array/leap-if-else-not.exe: 2-if-for-array/CMakeFiles/leap-if-else-not.dir/build.make
2-if-for-array/leap-if-else-not.exe: 2-if-for-array/CMakeFiles/leap-if-else-not.dir/linklibs.rsp
2-if-for-array/leap-if-else-not.exe: 2-if-for-array/CMakeFiles/leap-if-else-not.dir/objects1.rsp
2-if-for-array/leap-if-else-not.exe: 2-if-for-array/CMakeFiles/leap-if-else-not.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable leap-if-else-not.exe"
	cd /d E:\c-project\cmake-build-debug\2-if-for-array && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\leap-if-else-not.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
2-if-for-array/CMakeFiles/leap-if-else-not.dir/build: 2-if-for-array/leap-if-else-not.exe
.PHONY : 2-if-for-array/CMakeFiles/leap-if-else-not.dir/build

2-if-for-array/CMakeFiles/leap-if-else-not.dir/clean:
	cd /d E:\c-project\cmake-build-debug\2-if-for-array && $(CMAKE_COMMAND) -P CMakeFiles\leap-if-else-not.dir\cmake_clean.cmake
.PHONY : 2-if-for-array/CMakeFiles/leap-if-else-not.dir/clean

2-if-for-array/CMakeFiles/leap-if-else-not.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\2-if-for-array E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\2-if-for-array E:\c-project\cmake-build-debug\2-if-for-array\CMakeFiles\leap-if-else-not.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 2-if-for-array/CMakeFiles/leap-if-else-not.dir/depend

