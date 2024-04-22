#define CV_CPU_SIMD_FILENAME "/Users/dhruvnistala/VSCode/CS350C/Final_Project/Open_CV/opencv/modules/core/src/matmul.simd.hpp"
#define CV_CPU_DISPATCH_MODE NEON_DOTPROD
#include "opencv2/core/private/cv_cpu_include_simd_declarations.hpp"

#define CV_CPU_DISPATCH_MODES_ALL NEON_DOTPROD, BASELINE

#undef CV_CPU_SIMD_FILENAME
