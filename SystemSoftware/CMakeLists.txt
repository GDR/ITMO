cmake_minimum_required(VERSION 3.7)
project(task_4_2)

file(GLOB_RECURSE sources "Chapter_*/*.cpp")
file(GLOB_RECURSE inputs "Chapter_*/*.in")

set(CMAKE_CXX_STANDARD 14)

foreach(_source ${sources})

    get_filename_component(FNAME ${_source} NAME_WE)
    MESSAGE( STATUS "Source " ${FNAME})
    project(${FNAME})
    add_executable(${FNAME} ${_source})
endforeach()
