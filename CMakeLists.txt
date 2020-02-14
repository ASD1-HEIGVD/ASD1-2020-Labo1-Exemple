cmake_minimum_required(VERSION 3.7)
project (Exemples_matplotlib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PythonLibs 2.7 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
add_definitions(-DMATPLOTLIBCPP_PYTHON_HEADER=Python.h)
add_definitions(-DWITHOUT_NUMPY)

add_executable(linear linear.cpp)
target_link_libraries(linear python2.7)

add_executable(semilogx semilogx.cpp)
target_link_libraries(semilogx python2.7)

add_executable(semilogy semilogy.cpp)
target_link_libraries(semilogy python2.7)

add_executable(loglog loglog.cpp)
target_link_libraries(loglog python2.7)
