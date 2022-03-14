#include <cstdio>
#include <cstdlib>
#include <iostream>

// Define TINY_DNG_LOADER_IMPLEMENTATION and STB_IMAGE_IMPLEMENTATION in only one *.cc
#define TINY_DNG_LOADER_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION

// Enable ZIP compression(through miniz library)
// Please don't forget copying&adding `miniz.c` and `miniz.h` to your project.
// #define TINY_DNG_LOADER_ENABLE_ZIP

// Uncomment these two lines if you want to use system provided zlib library, not miniz
// #define TINY_DNG_LOADER_USE_SYSTEM_ZLIB
// #include <zlib.h>
#include "tiny_dng_loader.h"
