# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /opt/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gdr/Git/GDR/ITMO/SystemSoftware

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gdr/Git/GDR/ITMO/SystemSoftware/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Task_3_6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Task_3_6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task_3_6.dir/flags.make

CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o: CMakeFiles/Task_3_6.dir/flags.make
CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o: ../Chapter_3/Task_3_6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gdr/Git/GDR/ITMO/SystemSoftware/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o -c /home/gdr/Git/GDR/ITMO/SystemSoftware/Chapter_3/Task_3_6.cpp

CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gdr/Git/GDR/ITMO/SystemSoftware/Chapter_3/Task_3_6.cpp > CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.i

CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gdr/Git/GDR/ITMO/SystemSoftware/Chapter_3/Task_3_6.cpp -o CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.s

CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.requires:

.PHONY : CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.requires

CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.provides: CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.requires
	$(MAKE) -f CMakeFiles/Task_3_6.dir/build.make CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.provides.build
.PHONY : CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.provides

CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.provides.build: CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o


# Object files for target Task_3_6
Task_3_6_OBJECTS = \
"CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o"

# External object files for target Task_3_6
Task_3_6_EXTERNAL_OBJECTS =

Task_3_6: CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o
Task_3_6: CMakeFiles/Task_3_6.dir/build.make
Task_3_6: CMakeFiles/Task_3_6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gdr/Git/GDR/ITMO/SystemSoftware/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task_3_6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task_3_6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task_3_6.dir/build: Task_3_6

.PHONY : CMakeFiles/Task_3_6.dir/build

CMakeFiles/Task_3_6.dir/requires: CMakeFiles/Task_3_6.dir/Chapter_3/Task_3_6.cpp.o.requires

.PHONY : CMakeFiles/Task_3_6.dir/requires

CMakeFiles/Task_3_6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task_3_6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task_3_6.dir/clean

CMakeFiles/Task_3_6.dir/depend:
	cd /home/gdr/Git/GDR/ITMO/SystemSoftware/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gdr/Git/GDR/ITMO/SystemSoftware /home/gdr/Git/GDR/ITMO/SystemSoftware /home/gdr/Git/GDR/ITMO/SystemSoftware/cmake-build-debug /home/gdr/Git/GDR/ITMO/SystemSoftware/cmake-build-debug /home/gdr/Git/GDR/ITMO/SystemSoftware/cmake-build-debug/CMakeFiles/Task_3_6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Task_3_6.dir/depend

