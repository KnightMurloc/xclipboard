cmake_minimum_required(VERSION 3.16)
project(xclipboard C)

set(BUILD_EXAMPLES ON)

add_library(${PROJECT_NAME} lib.c xclipboard.h)
target_link_libraries(${PROJECT_NAME} X11 Xfixes)

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()