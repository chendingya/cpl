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
include FCS/FCS-2/CMakeFiles/antwar.dir/depend.make
# Include the progress variables for this target.
include FCS/FCS-2/CMakeFiles/antwar.dir/progress.make

# Include the compile flags for this target's objects.
include FCS/FCS-2/CMakeFiles/antwar.dir/flags.make

FCS/FCS-2/CMakeFiles/antwar.dir/antwar.c.obj: FCS/FCS-2/CMakeFiles/antwar.dir/flags.make
FCS/FCS-2/CMakeFiles/antwar.dir/antwar.c.obj: ../FCS/FCS-2/antwar.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object FCS/FCS-2/CMakeFiles/antwar.dir/antwar.c.obj"
	cd /d E:\c-project\cmake-build-debug\FCS\FCS-2 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\antwar.dir\antwar.c.obj -c E:\c-project\FCS\FCS-2\antwar.c

FCS/FCS-2/CMakeFiles/antwar.dir/antwar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/antwar.dir/antwar.c.i"
	cd /d E:\c-project\cmake-build-debug\FCS\FCS-2 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\FCS\FCS-2\antwar.c > CMakeFiles\antwar.dir\antwar.c.i

FCS/FCS-2/CMakeFiles/antwar.dir/antwar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/antwar.dir/antwar.c.s"
	cd /d E:\c-project\cmake-build-debug\FCS\FCS-2 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\FCS\FCS-2\antwar.c -o CMakeFiles\antwar.dir\antwar.c.s

# Object files for target antwar
antwar_OBJECTS = \
"CMakeFiles/antwar.dir/antwar.c.obj"

# External object files for target antwar
antwar_EXTERNAL_OBJECTS =

FCS/FCS-2/antwar.exe: FCS/FCS-2/CMakeFiles/antwar.dir/antwar.c.obj
FCS/FCS-2/antwar.exe: FCS/FCS-2/CMakeFiles/antwar.dir/build.make
FCS/FCS-2/antwar.exe: FCS/FCS-2/CMakeFiles/antwar.dir/linklibs.rsp
FCS/FCS-2/antwar.exe: FCS/FCS-2/CMakeFiles/antwar.dir/objects1.rsp
FCS/FCS-2/antwar.exe: FCS/FCS-2/CMakeFiles/antwar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable antwar.exe"
	cd /d E:\c-project\cmake-build-debug\FCS\FCS-2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\antwar.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
FCS/FCS-2/CMakeFiles/antwar.dir/build: FCS/FCS-2/antwar.exe
.PHONY : FCS/FCS-2/CMakeFiles/antwar.dir/build

FCS/FCS-2/CMakeFiles/antwar.dir/clean:
	cd /d E:\c-project\cmake-build-debug\FCS\FCS-2 && $(CMAKE_COMMAND) -P CMakeFiles\antwar.dir\cmake_clean.cmake
.PHONY : FCS/FCS-2/CMakeFiles/antwar.dir/clean

FCS/FCS-2/CMakeFiles/antwar.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\FCS\FCS-2 E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\FCS\FCS-2 E:\c-project\cmake-build-debug\FCS\FCS-2\CMakeFiles\antwar.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : FCS/FCS-2/CMakeFiles/antwar.dir/depend

