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
CMAKE_SOURCE_DIR = /home/benjisaurus/work/cpp/aoc2020/three

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/benjisaurus/work/cpp/aoc2020/three/build

# Include any dependencies generated for this target.
include src/CMakeFiles/three.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/three.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/three.dir/flags.make

src/CMakeFiles/three.dir/__/lib/three.cpp.o: src/CMakeFiles/three.dir/flags.make
src/CMakeFiles/three.dir/__/lib/three.cpp.o: ../lib/three.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/benjisaurus/work/cpp/aoc2020/three/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/three.dir/__/lib/three.cpp.o"
	cd /home/benjisaurus/work/cpp/aoc2020/three/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/three.dir/__/lib/three.cpp.o -c /home/benjisaurus/work/cpp/aoc2020/three/lib/three.cpp

src/CMakeFiles/three.dir/__/lib/three.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/three.dir/__/lib/three.cpp.i"
	cd /home/benjisaurus/work/cpp/aoc2020/three/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/benjisaurus/work/cpp/aoc2020/three/lib/three.cpp > CMakeFiles/three.dir/__/lib/three.cpp.i

src/CMakeFiles/three.dir/__/lib/three.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/three.dir/__/lib/three.cpp.s"
	cd /home/benjisaurus/work/cpp/aoc2020/three/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/benjisaurus/work/cpp/aoc2020/three/lib/three.cpp -o CMakeFiles/three.dir/__/lib/three.cpp.s

# Object files for target three
three_OBJECTS = \
"CMakeFiles/three.dir/__/lib/three.cpp.o"

# External object files for target three
three_EXTERNAL_OBJECTS =

src/libthree.a: src/CMakeFiles/three.dir/__/lib/three.cpp.o
src/libthree.a: src/CMakeFiles/three.dir/build.make
src/libthree.a: src/CMakeFiles/three.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/benjisaurus/work/cpp/aoc2020/three/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libthree.a"
	cd /home/benjisaurus/work/cpp/aoc2020/three/build/src && $(CMAKE_COMMAND) -P CMakeFiles/three.dir/cmake_clean_target.cmake
	cd /home/benjisaurus/work/cpp/aoc2020/three/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/three.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/three.dir/build: src/libthree.a

.PHONY : src/CMakeFiles/three.dir/build

src/CMakeFiles/three.dir/clean:
	cd /home/benjisaurus/work/cpp/aoc2020/three/build/src && $(CMAKE_COMMAND) -P CMakeFiles/three.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/three.dir/clean

src/CMakeFiles/three.dir/depend:
	cd /home/benjisaurus/work/cpp/aoc2020/three/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/benjisaurus/work/cpp/aoc2020/three /home/benjisaurus/work/cpp/aoc2020/three/src /home/benjisaurus/work/cpp/aoc2020/three/build /home/benjisaurus/work/cpp/aoc2020/three/build/src /home/benjisaurus/work/cpp/aoc2020/three/build/src/CMakeFiles/three.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/three.dir/depend

