# I couldn't make wxWidgets work with earlier CMake versions and VS 2015
cmake_minimum_required (VERSION 3.5)

project (Cucumbersome)

find_package (wxWidgets COMPONENTS core base REQUIRED)
include ("${wxWidgets_USE_FILE}")

add_executable (
    Cucumbersome
    main.cpp
    main.h
    cucumbersome.cpp
    cucumbersome.h
    )
target_link_libraries (Cucumbersome ${wxWidgets_LIBRARIES})
