# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/My_Basic_C_Tutorials.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/My_Basic_C_Tutorials.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/My_Basic_C_Tutorials.dir/flags.make

CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.obj: CMakeFiles/My_Basic_C_Tutorials.dir/flags.make
CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.obj: ../18-loop_demo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\My_Basic_C_Tutorials.dir\18-loop_demo.c.obj -c "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\18-loop_demo.c"

CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\18-loop_demo.c" > CMakeFiles\My_Basic_C_Tutorials.dir\18-loop_demo.c.i

CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\18-loop_demo.c" -o CMakeFiles\My_Basic_C_Tutorials.dir\18-loop_demo.c.s

# Object files for target My_Basic_C_Tutorials
My_Basic_C_Tutorials_OBJECTS = \
"CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.obj"

# External object files for target My_Basic_C_Tutorials
My_Basic_C_Tutorials_EXTERNAL_OBJECTS =

My_Basic_C_Tutorials.exe: CMakeFiles/My_Basic_C_Tutorials.dir/18-loop_demo.c.obj
My_Basic_C_Tutorials.exe: CMakeFiles/My_Basic_C_Tutorials.dir/build.make
My_Basic_C_Tutorials.exe: CMakeFiles/My_Basic_C_Tutorials.dir/linklibs.rsp
My_Basic_C_Tutorials.exe: CMakeFiles/My_Basic_C_Tutorials.dir/objects1.rsp
My_Basic_C_Tutorials.exe: CMakeFiles/My_Basic_C_Tutorials.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable My_Basic_C_Tutorials.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\My_Basic_C_Tutorials.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/My_Basic_C_Tutorials.dir/build: My_Basic_C_Tutorials.exe

.PHONY : CMakeFiles/My_Basic_C_Tutorials.dir/build

CMakeFiles/My_Basic_C_Tutorials.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\My_Basic_C_Tutorials.dir\cmake_clean.cmake
.PHONY : CMakeFiles/My_Basic_C_Tutorials.dir/clean

CMakeFiles/My_Basic_C_Tutorials.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials" "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials" "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\cmake-build-debug" "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\cmake-build-debug" "C:\Users\Halil Acar\Google Drive\Programming Stuffs\My-Basic-C-Tutorials\cmake-build-debug\CMakeFiles\My_Basic_C_Tutorials.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/My_Basic_C_Tutorials.dir/depend

