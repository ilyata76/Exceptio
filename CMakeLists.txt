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
    include/exceptio.hpp
)

set (SOURCES 
    include/src_exceptio/main_class.cpp
)

add_executable (EXECUTABLE 
	${ENTRYPOINT} 
	${HEADERS} 
	${SOURCES}
)