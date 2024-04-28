# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build

# Include any dependencies generated for this target.
include apps/visualisation/CMakeFiles/opencv_visualisation.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include apps/visualisation/CMakeFiles/opencv_visualisation.dir/compiler_depend.make

# Include the progress variables for this target.
include apps/visualisation/CMakeFiles/opencv_visualisation.dir/progress.make

# Include the compile flags for this target's objects.
include apps/visualisation/CMakeFiles/opencv_visualisation.dir/flags.make

apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o: apps/visualisation/CMakeFiles/opencv_visualisation.dir/flags.make
apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/apps/visualisation/opencv_visualisation.cpp
apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o: apps/visualisation/CMakeFiles/opencv_visualisation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/apps/visualisation && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o -MF CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o.d -o CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/apps/visualisation/opencv_visualisation.cpp

apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/apps/visualisation && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/apps/visualisation/opencv_visualisation.cpp > CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.i

apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/apps/visualisation && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/apps/visualisation/opencv_visualisation.cpp -o CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.s

# Object files for target opencv_visualisation
opencv_visualisation_OBJECTS = \
"CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o"

# External object files for target opencv_visualisation
opencv_visualisation_EXTERNAL_OBJECTS =

bin/opencv_visualisation: apps/visualisation/CMakeFiles/opencv_visualisation.dir/opencv_visualisation.cpp.o
bin/opencv_visualisation: apps/visualisation/CMakeFiles/opencv_visualisation.dir/build.make
bin/opencv_visualisation: lib/libopencv_highgui.4.9.0.dylib
bin/opencv_visualisation: lib/libopencv_videoio.4.9.0.dylib
bin/opencv_visualisation: lib/libopencv_imgcodecs.4.9.0.dylib
bin/opencv_visualisation: lib/libopencv_imgproc.4.9.0.dylib
bin/opencv_visualisation: lib/libopencv_core.4.9.0.dylib
bin/opencv_visualisation: apps/visualisation/CMakeFiles/opencv_visualisation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/opencv_visualisation"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/apps/visualisation && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_visualisation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/visualisation/CMakeFiles/opencv_visualisation.dir/build: bin/opencv_visualisation
.PHONY : apps/visualisation/CMakeFiles/opencv_visualisation.dir/build

apps/visualisation/CMakeFiles/opencv_visualisation.dir/clean:
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/apps/visualisation && $(CMAKE_COMMAND) -P CMakeFiles/opencv_visualisation.dir/cmake_clean.cmake
.PHONY : apps/visualisation/CMakeFiles/opencv_visualisation.dir/clean

apps/visualisation/CMakeFiles/opencv_visualisation.dir/depend:
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/apps/visualisation /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/apps/visualisation /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/apps/visualisation/CMakeFiles/opencv_visualisation.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : apps/visualisation/CMakeFiles/opencv_visualisation.dir/depend
