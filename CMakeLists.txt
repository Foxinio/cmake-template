cmake_minimum_required(VERSION 3.20)
project(MyProj LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Generate compile_commands.json in the build directory
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "Export compilation database" FORCE)

# Pull in other parts
add_subdirectory(src)
enable_testing()
add_subdirectory(test)
