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
include src/CMakeFiles/four.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/four.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/four.dir/flags.make

src/CMakeFiles/four.dir/__/lib/four.cpp.o: src/CMakeFiles/four.dir/flags.make
src/CMakeFiles/four.dir/__/lib/four.cpp.o: ../lib/four.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/benjisaurus/work/cpp/aoc2020/four/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/four.dir/__/lib/four.cpp.o"
	cd /home/benjisaurus/work/cpp/aoc2020/four/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/four.dir/__/lib/four.cpp.o -c /home/benjisaurus/work/cpp/aoc2020/four/lib/four.cpp

src/CMakeFiles/four.dir/__/lib/four.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/four.dir/__/lib/four.cpp.i"
	cd /home/benjisaurus/work/cpp/aoc2020/four/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/benjisaurus/work/cpp/aoc2020/four/lib/four.cpp > CMakeFiles/four.dir/__/lib/four.cpp.i

src/CMakeFiles/four.dir/__/lib/four.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/four.dir/__/lib/four.cpp.s"
	cd /home/benjisaurus/work/cpp/aoc2020/four/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/benjisaurus/work/cpp/aoc2020/four/lib/four.cpp -o CMakeFiles/four.dir/__/lib/four.cpp.s

# Object files for target four
four_OBJECTS = \
"CMakeFiles/four.dir/__/lib/four.cpp.o"

# External object files for target four
four_EXTERNAL_OBJECTS =

src/libfour.a: src/CMakeFiles/four.dir/__/lib/four.cpp.o
src/libfour.a: src/CMakeFiles/four.dir/build.make
src/libfour.a: src/CMakeFiles/four.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/benjisaurus/work/cpp/aoc2020/four/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfour.a"
	cd /home/benjisaurus/work/cpp/aoc2020/four/build/src && $(CMAKE_COMMAND) -P CMakeFiles/four.dir/cmake_clean_target.cmake
	cd /home/benjisaurus/work/cpp/aoc2020/four/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/four.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/four.dir/build: src/libfour.a

.PHONY : src/CMakeFiles/four.dir/build

src/CMakeFiles/four.dir/clean:
	cd /home/benjisaurus/work/cpp/aoc2020/four/build/src && $(CMAKE_COMMAND) -P CMakeFiles/four.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/four.dir/clean

src/CMakeFiles/four.dir/depend:
	cd /home/benjisaurus/work/cpp/aoc2020/four/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjisaurus/work/cpp/aoc2020/four /home/benjisaurus/work/cpp/aoc2020/four/src /home/benjisaurus/work/cpp/aoc2020/four/build /home/benjisaurus/work/cpp/aoc2020/four/build/src /home/benjisaurus/work/cpp/aoc2020/four/build/src/CMakeFiles/four.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/four.dir/depend

