cmake_minimum_required(VERSION 3.10)

project(BookStore VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_STANDARD_REQUIRED True)

add_subdirectory(Book)

add_executable(BookStore main.cpp)

target_link_libraries(BookStore PUBLIC Book)

target_include_directories(BookStore PUBLIC "${PROJECT_SOURCE_DIR}/Book")
