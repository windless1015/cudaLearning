cmake_minimum_required(VERSION 3.16)
project(cudaLearning)

set(CMAKE_CUDA_ARCHITECTURES 53)

add_subdirectory(src/testCudaAvailability)
add_subdirectory(src/cudaResize)
add_subdirectory(src/cudaITKTest)
