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
include CMakeFiles/sphere.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/sphere.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sphere.dir/flags.make

CMakeFiles/sphere.dir/1-types-io/sphere.obj: CMakeFiles/sphere.dir/flags.make
CMakeFiles/sphere.dir/1-types-io/sphere.obj: ../1-types-io/sphere.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sphere.dir/1-types-io/sphere.obj"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sphere.dir\1-types-io\sphere.obj -c E:\c-project\1-types-io\sphere.c

CMakeFiles/sphere.dir/1-types-io/sphere.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sphere.dir/1-types-io/sphere.i"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\1-types-io\sphere.c > CMakeFiles\sphere.dir\1-types-io\sphere.i

CMakeFiles/sphere.dir/1-types-io/sphere.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sphere.dir/1-types-io/sphere.s"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\1-types-io\sphere.c -o CMakeFiles\sphere.dir\1-types-io\sphere.s

# Object files for target sphere
sphere_OBJECTS = \
"CMakeFiles/sphere.dir/1-types-io/sphere.obj"

# External object files for target sphere
sphere_EXTERNAL_OBJECTS =

sphere.exe: CMakeFiles/sphere.dir/1-types-io/sphere.obj
sphere.exe: CMakeFiles/sphere.dir/build.make
sphere.exe: CMakeFiles/sphere.dir/linklibs.rsp
sphere.exe: CMakeFiles/sphere.dir/objects1.rsp
sphere.exe: CMakeFiles/sphere.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sphere.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sphere.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sphere.dir/build: sphere.exe
.PHONY : CMakeFiles/sphere.dir/build

CMakeFiles/sphere.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sphere.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sphere.dir/clean

CMakeFiles/sphere.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\CMakeFiles\sphere.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sphere.dir/depend

