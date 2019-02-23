cmake_minimum_required(VERSION 3.0)
project(sort VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Wshadow -Wundef -Wno-missing-field-initializers")

add_executable(untitled main.cpp Worker.cpp wordssearcher.cpp)
