# MAKES LIBRARY
# MIN VERSION
cmake_minimum_required(VERSION 3.18)

# SET PROJECT
project(EXCEPTIO_CPP_LIBRARY)

set (HEADERS 
    ./tia/include/exceptio.hpp
    ./tia/include/assert.hpp
)

set (SOURCES 
    ./tia/src/exceptio.cpp
)

add_library ( ${PROJECT_NAME}
    STATIC 
    ${HEADERS}
    ${SOURCES}
)