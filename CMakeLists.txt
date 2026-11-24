cmake_minimum_required(VERSION 3.16)
project(ai-game-coach CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aigamecoach
    src/main.cpp
    src/replay.cpp
    src/analyze.cpp
)

target_include_directories(aigamecoach PRIVATE include)

if(WIN32)
    target_link_libraries(aigamecoach PRIVATE userenv)
endif()
