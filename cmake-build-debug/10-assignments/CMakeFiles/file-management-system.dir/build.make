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
include 10-assignments/CMakeFiles/file-management-system.dir/depend.make
# Include the progress variables for this target.
include 10-assignments/CMakeFiles/file-management-system.dir/progress.make

# Include the compile flags for this target's objects.
include 10-assignments/CMakeFiles/file-management-system.dir/flags.make

10-assignments/CMakeFiles/file-management-system.dir/file-management-system.c.obj: 10-assignments/CMakeFiles/file-management-system.dir/flags.make
10-assignments/CMakeFiles/file-management-system.dir/file-management-system.c.obj: ../10-assignments/file-management-system.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 10-assignments/CMakeFiles/file-management-system.dir/file-management-system.c.obj"
	cd /d E:\c-project\cmake-build-debug\10-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\file-management-system.dir\file-management-system.c.obj -c E:\c-project\10-assignments\file-management-system.c

10-assignments/CMakeFiles/file-management-system.dir/file-management-system.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/file-management-system.dir/file-management-system.c.i"
	cd /d E:\c-project\cmake-build-debug\10-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\10-assignments\file-management-system.c > CMakeFiles\file-management-system.dir\file-management-system.c.i

10-assignments/CMakeFiles/file-management-system.dir/file-management-system.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/file-management-system.dir/file-management-system.c.s"
	cd /d E:\c-project\cmake-build-debug\10-assignments && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\10-assignments\file-management-system.c -o CMakeFiles\file-management-system.dir\file-management-system.c.s

# Object files for target file-management-system
file__management__system_OBJECTS = \
"CMakeFiles/file-management-system.dir/file-management-system.c.obj"

# External object files for target file-management-system
file__management__system_EXTERNAL_OBJECTS =

10-assignments/file-management-system.exe: 10-assignments/CMakeFiles/file-management-system.dir/file-management-system.c.obj
10-assignments/file-management-system.exe: 10-assignments/CMakeFiles/file-management-system.dir/build.make
10-assignments/file-management-system.exe: 10-assignments/CMakeFiles/file-management-system.dir/linklibs.rsp
10-assignments/file-management-system.exe: 10-assignments/CMakeFiles/file-management-system.dir/objects1.rsp
10-assignments/file-management-system.exe: 10-assignments/CMakeFiles/file-management-system.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable file-management-system.exe"
	cd /d E:\c-project\cmake-build-debug\10-assignments && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\file-management-system.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
10-assignments/CMakeFiles/file-management-system.dir/build: 10-assignments/file-management-system.exe
.PHONY : 10-assignments/CMakeFiles/file-management-system.dir/build

10-assignments/CMakeFiles/file-management-system.dir/clean:
	cd /d E:\c-project\cmake-build-debug\10-assignments && $(CMAKE_COMMAND) -P CMakeFiles\file-management-system.dir\cmake_clean.cmake
.PHONY : 10-assignments/CMakeFiles/file-management-system.dir/clean

10-assignments/CMakeFiles/file-management-system.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\10-assignments E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\10-assignments E:\c-project\cmake-build-debug\10-assignments\CMakeFiles\file-management-system.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 10-assignments/CMakeFiles/file-management-system.dir/depend

