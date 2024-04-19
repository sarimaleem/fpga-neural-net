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
include modules/photo/CMakeFiles/opencv_test_photo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.make

# Include the progress variables for this target.
include modules/photo/CMakeFiles/opencv_test_photo.dir/progress.make

# Include the compile flags for this target's objects.
include modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make

modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/ocl/test_denoising.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/ocl/test_denoising.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/ocl/test_denoising.cpp > CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/ocl/test_denoising.cpp -o CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_cloning.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_cloning.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_cloning.cpp > CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_cloning.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_decolor.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_decolor.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_decolor.cpp > CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_decolor.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoise_tvl1.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoise_tvl1.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoise_tvl1.cpp > CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoise_tvl1.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cpp > CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cuda.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cuda.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cuda.cpp > CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_denoising.cuda.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_hdr.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_hdr.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_hdr.cpp > CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_hdr.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_inpaint.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_inpaint.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_inpaint.cpp > CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_inpaint.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_main.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_main.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_main.cpp > CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_main.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.s

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/flags.make
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_npr.cpp
modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o: modules/photo/CMakeFiles/opencv_test_photo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o -MF CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o.d -o CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o -c /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_npr.cpp

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.i"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_npr.cpp > CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.i

modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.s"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo/test/test_npr.cpp -o CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.s

# Object files for target opencv_test_photo
opencv_test_photo_OBJECTS = \
"CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o" \
"CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o"

# External object files for target opencv_test_photo
opencv_test_photo_EXTERNAL_OBJECTS =

bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/ocl/test_denoising.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_cloning.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_decolor.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoise_tvl1.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_denoising.cuda.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_hdr.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_inpaint.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_main.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/test/test_npr.cpp.o
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/build.make
bin/opencv_test_photo: lib/libopencv_ts.a
bin/opencv_test_photo: lib/libopencv_photo.4.9.0.dylib
bin/opencv_test_photo: lib/libopencv_highgui.4.9.0.dylib
bin/opencv_test_photo: lib/libopencv_videoio.4.9.0.dylib
bin/opencv_test_photo: lib/libopencv_imgcodecs.4.9.0.dylib
bin/opencv_test_photo: 3rdparty/lib/libtegra_hal.a
bin/opencv_test_photo: lib/libopencv_imgproc.4.9.0.dylib
bin/opencv_test_photo: lib/libopencv_core.4.9.0.dylib
bin/opencv_test_photo: modules/photo/CMakeFiles/opencv_test_photo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ../../bin/opencv_test_photo"
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_test_photo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/photo/CMakeFiles/opencv_test_photo.dir/build: bin/opencv_test_photo
.PHONY : modules/photo/CMakeFiles/opencv_test_photo.dir/build

modules/photo/CMakeFiles/opencv_test_photo.dir/clean:
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo && $(CMAKE_COMMAND) -P CMakeFiles/opencv_test_photo.dir/cmake_clean.cmake
.PHONY : modules/photo/CMakeFiles/opencv_test_photo.dir/clean

modules/photo/CMakeFiles/opencv_test_photo.dir/depend:
	cd /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/photo /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/photo/CMakeFiles/opencv_test_photo.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : modules/photo/CMakeFiles/opencv_test_photo.dir/depend

