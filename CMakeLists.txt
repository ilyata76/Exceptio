cmake_minimum_required(VERSION 3.16)

project(exceptio)

option(BUILD_TEST "building test binaries" OFF)

set (ENTRYPOINT
	./example/main.cpp
)

set (HEADERS 
    ./src/exceptio.hpp
    ./src/assert.hpp
)

set (SOURCES 
    ./src/exceptio.cpp
    ./src/assert.cpp
)

add_library ( ${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES} )

if(BUILD_TEST)
    add_executable( test ${ENTRYPOINT} )
        target_link_libraries( test ${PROJECT_NAME} )
endif()