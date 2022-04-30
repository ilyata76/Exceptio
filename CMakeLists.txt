# |--- ONLY FOR EXAMPLE


# MIN VERSION
cmake_minimum_required(VERSION 3.18)

# SET PROJECT

set(PROJECT EXCEPTIO)
project(${PROJECT})

set (ENTRYPOINT 
    example/main.cpp
)

set (HEADERS 
    include/tia/exceptio.hpp
    include/tia/assert.hpp
)

set (SOURCES 
    include/tia/src_exceptio/exceptio.cpp
)

add_executable (EXECUTABLE 
	${ENTRYPOINT} 
	${HEADERS} 
	${SOURCES}
)