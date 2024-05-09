cmake_minimum_required(VERSION 3.28)
project(Lab11)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(Lab11
        .idea/.gitignore
        .idea/Lab11.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        main.cpp)
