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
include modules/python3/CMakeFiles/opencv_python3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include modules/python3/CMakeFiles/opencv_python3.dir/compiler_depend.make

# Include the progress variables for this target.
include modules/python3/CMakeFiles/opencv_python3.dir/progress.make

# Include the compile flags for this target's objects.
include modules/python3/CMakeFiles/opencv_python3.dir/flags.make

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/flags.make
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2.cpp
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o -MF CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o.d -o CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2.cpp

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2.cpp > CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.i

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2.cpp -o CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.s

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/flags.make
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_util.cpp
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o -MF CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o.d -o CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_util.cpp

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_util.cpp > CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.i

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_util.cpp -o CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.s

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/flags.make
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_numpy.cpp
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o -MF CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o.d -o CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_numpy.cpp

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_numpy.cpp > CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.i

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_numpy.cpp -o CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.s

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/flags.make
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_convert.cpp
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o -MF CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o.d -o CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_convert.cpp

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_convert.cpp > CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.i

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_convert.cpp -o CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.s

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/flags.make
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_highgui.cpp
modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o: modules/python3/CMakeFiles/opencv_python3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o -MF CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o.d -o CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_highgui.cpp

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_highgui.cpp > CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.i

modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/src2/cv2_highgui.cpp -o CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.s

# Object files for target opencv_python3
opencv_python3_OBJECTS = \
"CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o" \
"CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o" \
"CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o" \
"CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o" \
"CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o"

# External object files for target opencv_python3
opencv_python3_EXTERNAL_OBJECTS =

lib/python3/cv2.cpython-312-darwin.so: modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2.cpp.o
lib/python3/cv2.cpython-312-darwin.so: modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_util.cpp.o
lib/python3/cv2.cpython-312-darwin.so: modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_numpy.cpp.o
lib/python3/cv2.cpython-312-darwin.so: modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_convert.cpp.o
lib/python3/cv2.cpython-312-darwin.so: modules/python3/CMakeFiles/opencv_python3.dir/__/src2/cv2_highgui.cpp.o
lib/python3/cv2.cpython-312-darwin.so: modules/python3/CMakeFiles/opencv_python3.dir/build.make
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_ml.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_photo.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_highgui.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_objdetect.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_stitching.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_gapi.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_videoio.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_imgcodecs.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_video.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_dnn.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_calib3d.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_features2d.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_flann.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_imgproc.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: lib/libopencv_core.4.9.0.dylib
lib/python3/cv2.cpython-312-darwin.so: modules/python3/CMakeFiles/opencv_python3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared module ../../lib/python3/cv2.cpython-312-darwin.so"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_python3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/python3/CMakeFiles/opencv_python3.dir/build: lib/python3/cv2.cpython-312-darwin.so
.PHONY : modules/python3/CMakeFiles/opencv_python3.dir/build

modules/python3/CMakeFiles/opencv_python3.dir/clean:
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 && $(CMAKE_COMMAND) -P CMakeFiles/opencv_python3.dir/cmake_clean.cmake
.PHONY : modules/python3/CMakeFiles/opencv_python3.dir/clean

modules/python3/CMakeFiles/opencv_python3.dir/depend:
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/python/python3 /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3 /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/python3/CMakeFiles/opencv_python3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : modules/python3/CMakeFiles/opencv_python3.dir/depend

