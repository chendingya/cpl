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
include 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/depend.make
# Include the progress variables for this target.
include 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/progress.make

# Include the compile flags for this target's objects.
include 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/flags.make

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.obj: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/flags.make
11-linkedlist/CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.obj: ../11-linkedlist/josephus-linkedlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.obj"
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\josephus-linkedlist.dir\josephus-linkedlist.c.obj -c E:\c-project\11-linkedlist\josephus-linkedlist.c

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.i"
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\11-linkedlist\josephus-linkedlist.c > CMakeFiles\josephus-linkedlist.dir\josephus-linkedlist.c.i

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.s"
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\11-linkedlist\josephus-linkedlist.c -o CMakeFiles\josephus-linkedlist.dir\josephus-linkedlist.c.s

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/ll/ll.c.obj: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/flags.make
11-linkedlist/CMakeFiles/josephus-linkedlist.dir/ll/ll.c.obj: ../11-linkedlist/ll/ll.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/ll/ll.c.obj"
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\josephus-linkedlist.dir\ll\ll.c.obj -c E:\c-project\11-linkedlist\ll\ll.c

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/ll/ll.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/josephus-linkedlist.dir/ll/ll.c.i"
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\11-linkedlist\ll\ll.c > CMakeFiles\josephus-linkedlist.dir\ll\ll.c.i

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/ll/ll.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/josephus-linkedlist.dir/ll/ll.c.s"
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\11-linkedlist\ll\ll.c -o CMakeFiles\josephus-linkedlist.dir\ll\ll.c.s

# Object files for target josephus-linkedlist
josephus__linkedlist_OBJECTS = \
"CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.obj" \
"CMakeFiles/josephus-linkedlist.dir/ll/ll.c.obj"

# External object files for target josephus-linkedlist
josephus__linkedlist_EXTERNAL_OBJECTS =

11-linkedlist/josephus-linkedlist.exe: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/josephus-linkedlist.c.obj
11-linkedlist/josephus-linkedlist.exe: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/ll/ll.c.obj
11-linkedlist/josephus-linkedlist.exe: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/build.make
11-linkedlist/josephus-linkedlist.exe: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/linklibs.rsp
11-linkedlist/josephus-linkedlist.exe: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/objects1.rsp
11-linkedlist/josephus-linkedlist.exe: 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable josephus-linkedlist.exe"
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\josephus-linkedlist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
11-linkedlist/CMakeFiles/josephus-linkedlist.dir/build: 11-linkedlist/josephus-linkedlist.exe
.PHONY : 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/build

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/clean:
	cd /d E:\c-project\cmake-build-debug\11-linkedlist && $(CMAKE_COMMAND) -P CMakeFiles\josephus-linkedlist.dir\cmake_clean.cmake
.PHONY : 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/clean

11-linkedlist/CMakeFiles/josephus-linkedlist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project E:\c-project\11-linkedlist E:\c-project\cmake-build-debug E:\c-project\cmake-build-debug\11-linkedlist E:\c-project\cmake-build-debug\11-linkedlist\CMakeFiles\josephus-linkedlist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 11-linkedlist/CMakeFiles/josephus-linkedlist.dir/depend

