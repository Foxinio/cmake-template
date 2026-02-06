add_library(MyLib
    MyLib.cpp
)

# Tell consumers where to find public headers
target_include_directories(MyLib PUBLIC ${CMAKE_SOURCE_DIR}/include)
