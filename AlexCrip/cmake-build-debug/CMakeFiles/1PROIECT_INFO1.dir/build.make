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
CMAKE_COMMAND = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1PROIECT_INFO1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/1PROIECT_INFO1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1PROIECT_INFO1.dir/flags.make

CMakeFiles/1PROIECT_INFO1.dir/main.c.obj: CMakeFiles/1PROIECT_INFO1.dir/flags.make
CMakeFiles/1PROIECT_INFO1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/1PROIECT_INFO1.dir/main.c.obj"
	D:\MINGW\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\1PROIECT_INFO1.dir\main.c.obj -c "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\main.c"

CMakeFiles/1PROIECT_INFO1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1PROIECT_INFO1.dir/main.c.i"
	D:\MINGW\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\main.c" > CMakeFiles\1PROIECT_INFO1.dir\main.c.i

CMakeFiles/1PROIECT_INFO1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1PROIECT_INFO1.dir/main.c.s"
	D:\MINGW\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\main.c" -o CMakeFiles\1PROIECT_INFO1.dir\main.c.s

# Object files for target 1PROIECT_INFO1
1PROIECT_INFO1_OBJECTS = \
"CMakeFiles/1PROIECT_INFO1.dir/main.c.obj"

# External object files for target 1PROIECT_INFO1
1PROIECT_INFO1_EXTERNAL_OBJECTS =

1PROIECT_INFO1.exe: CMakeFiles/1PROIECT_INFO1.dir/main.c.obj
1PROIECT_INFO1.exe: CMakeFiles/1PROIECT_INFO1.dir/build.make
1PROIECT_INFO1.exe: CMakeFiles/1PROIECT_INFO1.dir/linklibs.rsp
1PROIECT_INFO1.exe: CMakeFiles/1PROIECT_INFO1.dir/objects1.rsp
1PROIECT_INFO1.exe: CMakeFiles/1PROIECT_INFO1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 1PROIECT_INFO1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1PROIECT_INFO1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1PROIECT_INFO1.dir/build: 1PROIECT_INFO1.exe
.PHONY : CMakeFiles/1PROIECT_INFO1.dir/build

CMakeFiles/1PROIECT_INFO1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1PROIECT_INFO1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1PROIECT_INFO1.dir/clean

CMakeFiles/1PROIECT_INFO1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip" "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip" "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\cmake-build-debug" "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\cmake-build-debug" "C:\Users\torey\Desktop\Alexandru\Facultate\AN1\SEM 1\Programare\Laborator\AlexCrip\cmake-build-debug\CMakeFiles\1PROIECT_INFO1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1PROIECT_INFO1.dir/depend
