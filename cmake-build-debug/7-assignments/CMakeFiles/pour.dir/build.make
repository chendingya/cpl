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
include 7-assignments/CMakeFiles/pour.dir/depend.make
# Include the progress variables for this target.
include 7-assignments/CMakeFiles/pour.dir/progress.make

# Include the compile flags for this target's objects.
include 7-assignments/CMakeFiles/pour.dir/flags.make

7-assignments/CMakeFiles/pour.dir/pour.c.obj: 7-assignments/CMakeFiles/pour.dir/flags.make
7-assignments/CMakeFiles/pour.dir/pour.c.obj: ../7-assignments/pour.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 7-assignments/CMakeFiles/pour.dir/pour.c.obj"
	cd /d E:\c-project\cmake-build-debug\7-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\pour.dir\pour.c.obj -c E:\c-project\7-assignments\pour.c

7-assignments/CMakeFiles/pour.dir/pour.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pour.dir/pour.c.i"
	cd /d E:\c-project\cmake-build-debug\7-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\7-assignments\pour.c > CMakeFiles\pour.dir\pour.c.i

7-assignments/CMakeFiles/pour.dir/pour.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pour.dir/pour.c.s"
	cd /d E:\c-project\cmake-build-debug\7-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\7-assignments\pour.c -o CMakeFiles\pour.dir\pour.c.s

# Object files for target pour
pour_OBJECTS = \
"CMakeFiles/pour.dir/pour.c.obj"

# External object files for target pour
pour_EXTERNAL_OBJECTS =

7-assignments/pour.exe: 7-assignments/CMakeFiles/pour.dir/pour.c.obj
7-assignments/pour.exe: 7-assignments/CMakeFiles/pour.dir/build.make
7-assignments/pour.exe: 7-assignments/CMakeFiles/pour.dir/linklibs.rsp
7-assignments/pour.exe: 7-assignments/CMakeFiles/pour.dir/objects1.rsp
7-assignments/pour.exe: 7-assignments/CMakeFiles/pour.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pour.exe"
	cd /d E:\c-project\cmake-build-debug\7-assignments && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pour.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
7-assignments/CMakeFiles/pour.dir/build: 7-assignments/pour.exe
.PHONY : 7-assignments/CMakeFiles/pour.dir/build

7-assignments/CMakeFiles/pour.dir/clean:
	cd /d E:\c-project\cmake-build-debug\7-assignments && $(CMAKE_COMMAND) -P CMakeFiles\pour.dir\cmake_clean.cmake
.PHONY : 7-assignments/CMakeFiles/pour.dir/clean

7-assignments/CMakeFiles/pour.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\7-assignments E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\7-assignments E:\c-project\cmake-build-debug\7-assignments\CMakeFiles\pour.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 7-assignments/CMakeFiles/pour.dir/depend

