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
include CMakeFiles/save.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/save.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/save.dir/flags.make

CMakeFiles/save.dir/save.c.obj: CMakeFiles/save.dir/flags.make
CMakeFiles/save.dir/save.c.obj: ../save.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/save.dir/save.c.obj"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\save.dir\save.c.obj -c E:\c-project\save.c

CMakeFiles/save.dir/save.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/save.dir/save.c.i"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\save.c > CMakeFiles\save.dir\save.c.i

CMakeFiles/save.dir/save.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/save.dir/save.c.s"
	E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\save.c -o CMakeFiles\save.dir\save.c.s

# Object files for target save
save_OBJECTS = \
"CMakeFiles/save.dir/save.c.obj"

# External object files for target save
save_EXTERNAL_OBJECTS =

save.exe: CMakeFiles/save.dir/save.c.obj
save.exe: CMakeFiles/save.dir/build.make
save.exe: CMakeFiles/save.dir/linklibs.rsp
save.exe: CMakeFiles/save.dir/objects1.rsp
save.exe: CMakeFiles/save.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable save.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\save.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/save.dir/build: save.exe
.PHONY : CMakeFiles/save.dir/build

CMakeFiles/save.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\save.dir\cmake_clean.cmake
.PHONY : CMakeFiles/save.dir/clean

CMakeFiles/save.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\CMakeFiles\save.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/save.dir/depend

