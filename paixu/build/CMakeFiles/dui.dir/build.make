# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /root/git/test/code/paixu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/git/test/code/paixu/build

# Include any dependencies generated for this target.
include CMakeFiles/dui.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dui.dir/flags.make

CMakeFiles/dui.dir/dui.cpp.o: CMakeFiles/dui.dir/flags.make
CMakeFiles/dui.dir/dui.cpp.o: ../dui.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/git/test/code/paixu/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/dui.dir/dui.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/dui.dir/dui.cpp.o -c /root/git/test/code/paixu/dui.cpp

CMakeFiles/dui.dir/dui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dui.dir/dui.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/git/test/code/paixu/dui.cpp > CMakeFiles/dui.dir/dui.cpp.i

CMakeFiles/dui.dir/dui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dui.dir/dui.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/git/test/code/paixu/dui.cpp -o CMakeFiles/dui.dir/dui.cpp.s

CMakeFiles/dui.dir/dui.cpp.o.requires:
.PHONY : CMakeFiles/dui.dir/dui.cpp.o.requires

CMakeFiles/dui.dir/dui.cpp.o.provides: CMakeFiles/dui.dir/dui.cpp.o.requires
	$(MAKE) -f CMakeFiles/dui.dir/build.make CMakeFiles/dui.dir/dui.cpp.o.provides.build
.PHONY : CMakeFiles/dui.dir/dui.cpp.o.provides

CMakeFiles/dui.dir/dui.cpp.o.provides.build: CMakeFiles/dui.dir/dui.cpp.o

# Object files for target dui
dui_OBJECTS = \
"CMakeFiles/dui.dir/dui.cpp.o"

# External object files for target dui
dui_EXTERNAL_OBJECTS =

dui: CMakeFiles/dui.dir/dui.cpp.o
dui: CMakeFiles/dui.dir/build.make
dui: lib/libcommon.a
dui: CMakeFiles/dui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable dui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dui.dir/build: dui
.PHONY : CMakeFiles/dui.dir/build

CMakeFiles/dui.dir/requires: CMakeFiles/dui.dir/dui.cpp.o.requires
.PHONY : CMakeFiles/dui.dir/requires

CMakeFiles/dui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dui.dir/clean

CMakeFiles/dui.dir/depend:
	cd /root/git/test/code/paixu/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/git/test/code/paixu /root/git/test/code/paixu /root/git/test/code/paixu/build /root/git/test/code/paixu/build /root/git/test/code/paixu/build/CMakeFiles/dui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dui.dir/depend
