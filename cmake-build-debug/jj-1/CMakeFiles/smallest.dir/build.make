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
include jj-1/CMakeFiles/smallest.dir/depend.make
# Include the progress variables for this target.
include jj-1/CMakeFiles/smallest.dir/progress.make

# Include the compile flags for this target's objects.
include jj-1/CMakeFiles/smallest.dir/flags.make

jj-1/CMakeFiles/smallest.dir/smallest.c.obj: jj-1/CMakeFiles/smallest.dir/flags.make
jj-1/CMakeFiles/smallest.dir/smallest.c.obj: ../jj-1/smallest.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object jj-1/CMakeFiles/smallest.dir/smallest.c.obj"
	cd /d E:\c-project\cmake-build-debug\jj-1 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\smallest.dir\smallest.c.obj -c E:\c-project\jj-1\smallest.c

jj-1/CMakeFiles/smallest.dir/smallest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/smallest.dir/smallest.c.i"
	cd /d E:\c-project\cmake-build-debug\jj-1 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\jj-1\smallest.c > CMakeFiles\smallest.dir\smallest.c.i

jj-1/CMakeFiles/smallest.dir/smallest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/smallest.dir/smallest.c.s"
	cd /d E:\c-project\cmake-build-debug\jj-1 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\jj-1\smallest.c -o CMakeFiles\smallest.dir\smallest.c.s

# Object files for target smallest
smallest_OBJECTS = \
"CMakeFiles/smallest.dir/smallest.c.obj"

# External object files for target smallest
smallest_EXTERNAL_OBJECTS =

jj-1/smallest.exe: jj-1/CMakeFiles/smallest.dir/smallest.c.obj
jj-1/smallest.exe: jj-1/CMakeFiles/smallest.dir/build.make
jj-1/smallest.exe: jj-1/CMakeFiles/smallest.dir/linklibs.rsp
jj-1/smallest.exe: jj-1/CMakeFiles/smallest.dir/objects1.rsp
jj-1/smallest.exe: jj-1/CMakeFiles/smallest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable smallest.exe"
	cd /d E:\c-project\cmake-build-debug\jj-1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\smallest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jj-1/CMakeFiles/smallest.dir/build: jj-1/smallest.exe
.PHONY : jj-1/CMakeFiles/smallest.dir/build

jj-1/CMakeFiles/smallest.dir/clean:
	cd /d E:\c-project\cmake-build-debug\jj-1 && $(CMAKE_COMMAND) -P CMakeFiles\smallest.dir\cmake_clean.cmake
.PHONY : jj-1/CMakeFiles/smallest.dir/clean

jj-1/CMakeFiles/smallest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\jj-1 E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\jj-1 E:\c-project\cmake-build-debug\jj-1\CMakeFiles\smallest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : jj-1/CMakeFiles/smallest.dir/depend

