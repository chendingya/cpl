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
CMAKE_SOURCE_DIR = E:\c-project\FCS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c-project\FCS\cmake-build-debug

# Include any dependencies generated for this target.
include FCS-2/CMakeFiles/ai.dir/depend.make
# Include the progress variables for this target.
include FCS-2/CMakeFiles/ai.dir/progress.make

# Include the compile flags for this target's objects.
include FCS-2/CMakeFiles/ai.dir/flags.make

FCS-2/CMakeFiles/ai.dir/ai.obj: FCS-2/CMakeFiles/ai.dir/flags.make
FCS-2/CMakeFiles/ai.dir/ai.obj: ../FCS-2/ai.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c-project\FCS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object FCS-2/CMakeFiles/ai.dir/ai.obj"
	cd /d E:\c-project\FCS\cmake-build-debug\FCS-2 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ai.dir\ai.obj -c E:\c-project\FCS\FCS-2\ai.c

FCS-2/CMakeFiles/ai.dir/ai.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ai.dir/ai.i"
	cd /d E:\c-project\FCS\cmake-build-debug\FCS-2 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c-project\FCS\FCS-2\ai.c > CMakeFiles\ai.dir\ai.i

FCS-2/CMakeFiles/ai.dir/ai.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ai.dir/ai.s"
	cd /d E:\c-project\FCS\cmake-build-debug\FCS-2 && E:\c\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c-project\FCS\FCS-2\ai.c -o CMakeFiles\ai.dir\ai.s

# Object files for target ai
ai_OBJECTS = \
"CMakeFiles/ai.dir/ai.obj"

# External object files for target ai
ai_EXTERNAL_OBJECTS =

FCS-2/ai.exe: FCS-2/CMakeFiles/ai.dir/ai.obj
FCS-2/ai.exe: FCS-2/CMakeFiles/ai.dir/build.make
FCS-2/ai.exe: FCS-2/CMakeFiles/ai.dir/linklibs.rsp
FCS-2/ai.exe: FCS-2/CMakeFiles/ai.dir/objects1.rsp
FCS-2/ai.exe: FCS-2/CMakeFiles/ai.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c-project\FCS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ai.exe"
	cd /d E:\c-project\FCS\cmake-build-debug\FCS-2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ai.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
FCS-2/CMakeFiles/ai.dir/build: FCS-2/ai.exe
.PHONY : FCS-2/CMakeFiles/ai.dir/build

FCS-2/CMakeFiles/ai.dir/clean:
	cd /d E:\c-project\FCS\cmake-build-debug\FCS-2 && $(CMAKE_COMMAND) -P CMakeFiles\ai.dir\cmake_clean.cmake
.PHONY : FCS-2/CMakeFiles/ai.dir/clean

FCS-2/CMakeFiles/ai.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c-project\FCS E:\c-project\FCS\FCS-2 E:\c-project\FCS\cmake-build-debug E:\c-project\FCS\cmake-build-debug\FCS-2 E:\c-project\FCS\cmake-build-debug\FCS-2\CMakeFiles\ai.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : FCS-2/CMakeFiles/ai.dir/depend

