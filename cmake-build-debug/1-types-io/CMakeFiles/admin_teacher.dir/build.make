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
include 1-types-io/CMakeFiles/admin_teacher.dir/depend.make
# Include the progress variables for this target.
include 1-types-io/CMakeFiles/admin_teacher.dir/progress.make

# Include the compile flags for this target's objects.
include 1-types-io/CMakeFiles/admin_teacher.dir/flags.make

1-types-io/CMakeFiles/admin_teacher.dir/admin_teacher.c.obj: 1-types-io/CMakeFiles/admin_teacher.dir/flags.make
1-types-io/CMakeFiles/admin_teacher.dir/admin_teacher.c.obj: ../1-types-io/admin_teacher.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 1-types-io/CMakeFiles/admin_teacher.dir/admin_teacher.c.obj"
	cd /d E:\c-project\cmake-build-debug\1-types-io && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\admin_teacher.dir\admin_teacher.c.obj -c E:\c-project\1-types-io\admin_teacher.c

1-types-io/CMakeFiles/admin_teacher.dir/admin_teacher.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/admin_teacher.dir/admin_teacher.c.i"
	cd /d E:\c-project\cmake-build-debug\1-types-io && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\1-types-io\admin_teacher.c > CMakeFiles\admin_teacher.dir\admin_teacher.c.i

1-types-io/CMakeFiles/admin_teacher.dir/admin_teacher.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/admin_teacher.dir/admin_teacher.c.s"
	cd /d E:\c-project\cmake-build-debug\1-types-io && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\1-types-io\admin_teacher.c -o CMakeFiles\admin_teacher.dir\admin_teacher.c.s

# Object files for target admin_teacher
admin_teacher_OBJECTS = \
"CMakeFiles/admin_teacher.dir/admin_teacher.c.obj"

# External object files for target admin_teacher
admin_teacher_EXTERNAL_OBJECTS =

1-types-io/admin_teacher.exe: 1-types-io/CMakeFiles/admin_teacher.dir/admin_teacher.c.obj
1-types-io/admin_teacher.exe: 1-types-io/CMakeFiles/admin_teacher.dir/build.make
1-types-io/admin_teacher.exe: 1-types-io/CMakeFiles/admin_teacher.dir/linklibs.rsp
1-types-io/admin_teacher.exe: 1-types-io/CMakeFiles/admin_teacher.dir/objects1.rsp
1-types-io/admin_teacher.exe: 1-types-io/CMakeFiles/admin_teacher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable admin_teacher.exe"
	cd /d E:\c-project\cmake-build-debug\1-types-io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\admin_teacher.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
1-types-io/CMakeFiles/admin_teacher.dir/build: 1-types-io/admin_teacher.exe
.PHONY : 1-types-io/CMakeFiles/admin_teacher.dir/build

1-types-io/CMakeFiles/admin_teacher.dir/clean:
	cd /d E:\c-project\cmake-build-debug\1-types-io && $(CMAKE_COMMAND) -P CMakeFiles\admin_teacher.dir\cmake_clean.cmake
.PHONY : 1-types-io/CMakeFiles/admin_teacher.dir/clean

1-types-io/CMakeFiles/admin_teacher.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\1-types-io E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\1-types-io E:\c-project\cmake-build-debug\1-types-io\CMakeFiles\admin_teacher.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 1-types-io/CMakeFiles/admin_teacher.dir/depend

