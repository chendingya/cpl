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
include 2-assignments/CMakeFiles/cube.dir/depend.make
# Include the progress variables for this target.
include 2-assignments/CMakeFiles/cube.dir/progress.make

# Include the compile flags for this target's objects.
include 2-assignments/CMakeFiles/cube.dir/flags.make

2-assignments/CMakeFiles/cube.dir/cube.c.obj: 2-assignments/CMakeFiles/cube.dir/flags.make
2-assignments/CMakeFiles/cube.dir/cube.c.obj: ../2-assignments/cube.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 2-assignments/CMakeFiles/cube.dir/cube.c.obj"
	cd /d E:\c-project\cmake-build-debug\2-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cube.dir\cube.c.obj -c E:\c-project\2-assignments\cube.c

2-assignments/CMakeFiles/cube.dir/cube.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cube.dir/cube.c.i"
	cd /d E:\c-project\cmake-build-debug\2-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\2-assignments\cube.c > CMakeFiles\cube.dir\cube.c.i

2-assignments/CMakeFiles/cube.dir/cube.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cube.dir/cube.c.s"
	cd /d E:\c-project\cmake-build-debug\2-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\2-assignments\cube.c -o CMakeFiles\cube.dir\cube.c.s

# Object files for target cube
cube_OBJECTS = \
"CMakeFiles/cube.dir/cube.c.obj"

# External object files for target cube
cube_EXTERNAL_OBJECTS =

2-assignments/cube.exe: 2-assignments/CMakeFiles/cube.dir/cube.c.obj
2-assignments/cube.exe: 2-assignments/CMakeFiles/cube.dir/build.make
2-assignments/cube.exe: 2-assignments/CMakeFiles/cube.dir/linklibs.rsp
2-assignments/cube.exe: 2-assignments/CMakeFiles/cube.dir/objects1.rsp
2-assignments/cube.exe: 2-assignments/CMakeFiles/cube.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cube.exe"
	cd /d E:\c-project\cmake-build-debug\2-assignments && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cube.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
2-assignments/CMakeFiles/cube.dir/build: 2-assignments/cube.exe
.PHONY : 2-assignments/CMakeFiles/cube.dir/build

2-assignments/CMakeFiles/cube.dir/clean:
	cd /d E:\c-project\cmake-build-debug\2-assignments && $(CMAKE_COMMAND) -P CMakeFiles\cube.dir\cmake_clean.cmake
.PHONY : 2-assignments/CMakeFiles/cube.dir/clean

2-assignments/CMakeFiles/cube.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\2-assignments E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\2-assignments E:\c-project\cmake-build-debug\2-assignments\CMakeFiles\cube.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 2-assignments/CMakeFiles/cube.dir/depend

