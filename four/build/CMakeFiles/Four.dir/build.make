# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/benjisaurus/work/cpp/aoc2020/four

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/benjisaurus/work/cpp/aoc2020/four/build

# Include any dependencies generated for this target.
include CMakeFiles/Four.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Four.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Four.dir/flags.make

CMakeFiles/Four.dir/src/main.cpp.o: CMakeFiles/Four.dir/flags.make
CMakeFiles/Four.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/benjisaurus/work/cpp/aoc2020/four/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Four.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Four.dir/src/main.cpp.o -c /home/benjisaurus/work/cpp/aoc2020/four/src/main.cpp

CMakeFiles/Four.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Four.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/benjisaurus/work/cpp/aoc2020/four/src/main.cpp > CMakeFiles/Four.dir/src/main.cpp.i

CMakeFiles/Four.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Four.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/benjisaurus/work/cpp/aoc2020/four/src/main.cpp -o CMakeFiles/Four.dir/src/main.cpp.s

# Object files for target Four
Four_OBJECTS = \
"CMakeFiles/Four.dir/src/main.cpp.o"

# External object files for target Four
Four_EXTERNAL_OBJECTS =

Four: CMakeFiles/Four.dir/src/main.cpp.o
Four: CMakeFiles/Four.dir/build.make
Four: src/libfour.a
Four: CMakeFiles/Four.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/benjisaurus/work/cpp/aoc2020/four/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Four"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Four.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Four.dir/build: Four

.PHONY : CMakeFiles/Four.dir/build

CMakeFiles/Four.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Four.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Four.dir/clean

CMakeFiles/Four.dir/depend:
	cd /home/benjisaurus/work/cpp/aoc2020/four/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjisaurus/work/cpp/aoc2020/four /home/benjisaurus/work/cpp/aoc2020/four /home/benjisaurus/work/cpp/aoc2020/four/build /home/benjisaurus/work/cpp/aoc2020/four/build /home/benjisaurus/work/cpp/aoc2020/four/build/CMakeFiles/Four.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Four.dir/depend
