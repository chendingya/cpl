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
CMAKE_SOURCE_DIR = E:\c-project\10-struct

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-project\10-struct\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/echo.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/echo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/echo.dir/flags.make

CMakeFiles/echo.dir/echo.c.obj: CMakeFiles/echo.dir/flags.make
CMakeFiles/echo.dir/echo.c.obj: ../echo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\10-struct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/echo.dir/echo.c.obj"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\echo.dir\echo.c.obj -c E:\c-project\10-struct\echo.c

CMakeFiles/echo.dir/echo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/echo.dir/echo.c.i"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\10-struct\echo.c > CMakeFiles\echo.dir\echo.c.i

CMakeFiles/echo.dir/echo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/echo.dir/echo.c.s"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\10-struct\echo.c -o CMakeFiles\echo.dir\echo.c.s

# Object files for target echo
echo_OBJECTS = \
"CMakeFiles/echo.dir/echo.c.obj"

# External object files for target echo
echo_EXTERNAL_OBJECTS =

echo.exe: CMakeFiles/echo.dir/echo.c.obj
echo.exe: CMakeFiles/echo.dir/build.make
echo.exe: CMakeFiles/echo.dir/linklibs.rsp
echo.exe: CMakeFiles/echo.dir/objects1.rsp
echo.exe: CMakeFiles/echo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\10-struct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable echo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\echo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/echo.dir/build: echo.exe
.PHONY : CMakeFiles/echo.dir/build

CMakeFiles/echo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\echo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/echo.dir/clean

CMakeFiles/echo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project\10-struct E:\c-project\10-struct E:\c-project\10-struct\cmake-build-debug E:\c-project\10-struct\cmake-build-debug E:\c-project\10-struct\cmake-build-debug\CMakeFiles\echo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/echo.dir/depend
