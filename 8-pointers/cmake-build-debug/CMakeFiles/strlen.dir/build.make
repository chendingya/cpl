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
CMAKE_SOURCE_DIR = E:\c-project\8-pointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-project\8-pointers\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/strlen.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/strlen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strlen.dir/flags.make

CMakeFiles/strlen.dir/strlen.c.obj: CMakeFiles/strlen.dir/flags.make
CMakeFiles/strlen.dir/strlen.c.obj: ../strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\8-pointers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/strlen.dir/strlen.c.obj"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\strlen.dir\strlen.c.obj -c E:\c-project\8-pointers\strlen.c

CMakeFiles/strlen.dir/strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/strlen.dir/strlen.c.i"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\8-pointers\strlen.c > CMakeFiles\strlen.dir\strlen.c.i

CMakeFiles/strlen.dir/strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/strlen.dir/strlen.c.s"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\8-pointers\strlen.c -o CMakeFiles\strlen.dir\strlen.c.s

# Object files for target strlen
strlen_OBJECTS = \
"CMakeFiles/strlen.dir/strlen.c.obj"

# External object files for target strlen
strlen_EXTERNAL_OBJECTS =

strlen.exe: CMakeFiles/strlen.dir/strlen.c.obj
strlen.exe: CMakeFiles/strlen.dir/build.make
strlen.exe: CMakeFiles/strlen.dir/linklibs.rsp
strlen.exe: CMakeFiles/strlen.dir/objects1.rsp
strlen.exe: CMakeFiles/strlen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\8-pointers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable strlen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\strlen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strlen.dir/build: strlen.exe
.PHONY : CMakeFiles/strlen.dir/build

CMakeFiles/strlen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\strlen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/strlen.dir/clean

CMakeFiles/strlen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project\8-pointers E:\c-project\8-pointers E:\c-project\8-pointers\cmake-build-debug E:\c-project\8-pointers\cmake-build-debug E:\c-project\8-pointers\cmake-build-debug\CMakeFiles\strlen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strlen.dir/depend

