# CMake generated Testfile for 
# Source directory: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/video
# Build directory: /Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/modules/video
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_perf_video "/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/bin/opencv_perf_video" "--gtest_output=xml:opencv_perf_video.xml")
set_tests_properties(opencv_perf_video PROPERTIES  LABELS "Main;opencv_video;Performance" WORKING_DIRECTORY "/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/test-reports/performance" _BACKTRACE_TRIPLES "/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/cmake/OpenCVUtils.cmake;1795;add_test;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/cmake/OpenCVModule.cmake;1274;ocv_add_test_from_target;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/cmake/OpenCVModule.cmake;1134;ocv_add_perf_tests;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/video/CMakeLists.txt;2;ocv_define_module;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/video/CMakeLists.txt;0;")
add_test(opencv_sanity_video "/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/bin/opencv_perf_video" "--gtest_output=xml:opencv_perf_video.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_video PROPERTIES  LABELS "Main;opencv_video;Sanity" WORKING_DIRECTORY "/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/build/test-reports/sanity" _BACKTRACE_TRIPLES "/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/cmake/OpenCVUtils.cmake;1795;add_test;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/cmake/OpenCVModule.cmake;1275;ocv_add_test_from_target;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/cmake/OpenCVModule.cmake;1134;ocv_add_perf_tests;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/video/CMakeLists.txt;2;ocv_define_module;/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/video/CMakeLists.txt;0;")