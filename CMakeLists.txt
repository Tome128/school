cmake_minimum_required(VERSION 3.24)
project(cpp_examples)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_examples main.cpp pointers.cpp pointers.cpp)
add_executable(LCS LongestCommonSubsequence.cpp)
add_executable(lcs2 lcs2.cpp)
add_executable(pointers pointers.cpp)
