# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.16)
set(CMAKE_CXX_STANDARD 14)
project ("BoostTest")

enable_testing()
# Include sub-projects.
add_subdirectory ("MyProject")
add_subdirectory ("MyProject_test")

