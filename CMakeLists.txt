cmake_minimum_required(VERSION 3.16)
project(22s_pa02_cullenw)

set(CMAKE_CXX_STANDARD 14)

add_executable(22s_pa02_cullenw
        src/main.cpp src/QuickSort.cpp src/QuickSort.h src/InsertionSort.cpp src/InsertionSort.h
        src/MergeSort.cpp src/MergeSort.h
        src/ShellSort.cpp src/ShellSort.h)
