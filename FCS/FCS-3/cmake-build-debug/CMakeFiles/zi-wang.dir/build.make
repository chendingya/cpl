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
CMAKE_SOURCE_DIR = E:\c-project\FCS\FCS-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-project\FCS\FCS-3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zi-wang.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/zi-wang.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zi-wang.dir/flags.make

CMakeFiles/zi-wang.dir/zi-wang.c.obj: CMakeFiles/zi-wang.dir/flags.make
CMakeFiles/zi-wang.dir/zi-wang.c.obj: ../zi-wang.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\FCS\FCS-3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/zi-wang.dir/zi-wang.c.obj"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\zi-wang.dir\zi-wang.c.obj -c E:\c-project\FCS\FCS-3\zi-wang.c

CMakeFiles/zi-wang.dir/zi-wang.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zi-wang.dir/zi-wang.c.i"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\FCS\FCS-3\zi-wang.c > CMakeFiles\zi-wang.dir\zi-wang.c.i

CMakeFiles/zi-wang.dir/zi-wang.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zi-wang.dir/zi-wang.c.s"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\FCS\FCS-3\zi-wang.c -o CMakeFiles\zi-wang.dir\zi-wang.c.s

# Object files for target zi-wang
zi__wang_OBJECTS = \
"CMakeFiles/zi-wang.dir/zi-wang.c.obj"

# External object files for target zi-wang
zi__wang_EXTERNAL_OBJECTS =

zi-wang.exe: CMakeFiles/zi-wang.dir/zi-wang.c.obj
zi-wang.exe: CMakeFiles/zi-wang.dir/build.make
zi-wang.exe: CMakeFiles/zi-wang.dir/linklibs.rsp
zi-wang.exe: CMakeFiles/zi-wang.dir/objects1.rsp
zi-wang.exe: CMakeFiles/zi-wang.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\FCS\FCS-3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable zi-wang.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zi-wang.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zi-wang.dir/build: zi-wang.exe
.PHONY : CMakeFiles/zi-wang.dir/build

CMakeFiles/zi-wang.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zi-wang.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zi-wang.dir/clean

CMakeFiles/zi-wang.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project\FCS\FCS-3 E:\c-project\FCS\FCS-3 E:\c-project\FCS\FCS-3\cmake-build-debug E:\c-project\FCS\FCS-3\cmake-build-debug E:\c-project\FCS\FCS-3\cmake-build-debug\CMakeFiles\zi-wang.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zi-wang.dir/depend

