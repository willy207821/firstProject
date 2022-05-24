cmake_minimum_required(VERSION 3.18)
project(firstProject LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(exec_name test)
add_subdirectory(main_src)

