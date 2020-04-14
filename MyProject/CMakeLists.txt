# CMakeList.txt : CMake project for BoostTest_test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.16)
project("MyProject")
# Add source to this project's executable.
add_library (${PROJECT_NAME} "BoostTest.cpp" "BoostTest.h")

# TODO: Add tests and install targets if needed.
