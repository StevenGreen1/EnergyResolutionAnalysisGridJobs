# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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
CMAKE_COMMAND = /cvmfs/ilc.desy.de/sw/x86_64_gcc44_sl6/CMake/2.8.5/bin/cmake

# The command to remove a file.
RM = /cvmfs/ilc.desy.de/sw/x86_64_gcc44_sl6/CMake/2.8.5/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /cvmfs/ilc.desy.de/sw/x86_64_gcc44_sl6/CMake/2.8.5/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution/build

# Utility rule file for NightlyStart.

CMakeFiles/NightlyStart:
	/cvmfs/ilc.desy.de/sw/x86_64_gcc44_sl6/CMake/2.8.5/bin/ctest -D NightlyStart

NightlyStart: CMakeFiles/NightlyStart
NightlyStart: CMakeFiles/NightlyStart.dir/build.make
.PHONY : NightlyStart

# Rule to build all files generated by this target.
CMakeFiles/NightlyStart.dir/build: NightlyStart
.PHONY : CMakeFiles/NightlyStart.dir/build

CMakeFiles/NightlyStart.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NightlyStart.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NightlyStart.dir/clean

CMakeFiles/NightlyStart.dir/depend:
	cd /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution/build /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution/build /usera/sg568/ilcsoft_v01_17_07/JEREvolution/SingleParticleResolution/build/CMakeFiles/NightlyStart.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NightlyStart.dir/depend

