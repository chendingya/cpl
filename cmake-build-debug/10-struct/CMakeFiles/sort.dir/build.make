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
include 10-struct/CMakeFiles/sort.dir/depend.make
# Include the progress variables for this target.
include 10-struct/CMakeFiles/sort.dir/progress.make

# Include the compile flags for this target's objects.
include 10-struct/CMakeFiles/sort.dir/flags.make

10-struct/CMakeFiles/sort.dir/sort.c.obj: 10-struct/CMakeFiles/sort.dir/flags.make
10-struct/CMakeFiles/sort.dir/sort.c.obj: ../10-struct/sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 10-struct/CMakeFiles/sort.dir/sort.c.obj"
	cd /d E:\c-project\cmake-build-debug\10-struct && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sort.dir\sort.c.obj -c E:\c-project\10-struct\sort.c

10-struct/CMakeFiles/sort.dir/sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sort.dir/sort.c.i"
	cd /d E:\c-project\cmake-build-debug\10-struct && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\10-struct\sort.c > CMakeFiles\sort.dir\sort.c.i

10-struct/CMakeFiles/sort.dir/sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sort.dir/sort.c.s"
	cd /d E:\c-project\cmake-build-debug\10-struct && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\10-struct\sort.c -o CMakeFiles\sort.dir\sort.c.s

# Object files for target sort
sort_OBJECTS = \
"CMakeFiles/sort.dir/sort.c.obj"

# External object files for target sort
sort_EXTERNAL_OBJECTS =

10-struct/sort.exe: 10-struct/CMakeFiles/sort.dir/sort.c.obj
10-struct/sort.exe: 10-struct/CMakeFiles/sort.dir/build.make
10-struct/sort.exe: 10-struct/CMakeFiles/sort.dir/linklibs.rsp
10-struct/sort.exe: 10-struct/CMakeFiles/sort.dir/objects1.rsp
10-struct/sort.exe: 10-struct/CMakeFiles/sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sort.exe"
	cd /d E:\c-project\cmake-build-debug\10-struct && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
10-struct/CMakeFiles/sort.dir/build: 10-struct/sort.exe
.PHONY : 10-struct/CMakeFiles/sort.dir/build

10-struct/CMakeFiles/sort.dir/clean:
	cd /d E:\c-project\cmake-build-debug\10-struct && $(CMAKE_COMMAND) -P CMakeFiles\sort.dir\cmake_clean.cmake
.PHONY : 10-struct/CMakeFiles/sort.dir/clean

10-struct/CMakeFiles/sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\10-struct E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\10-struct E:\c-project\cmake-build-debug\10-struct\CMakeFiles\sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 10-struct/CMakeFiles/sort.dir/depend

