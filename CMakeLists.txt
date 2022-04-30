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
    include/TIA_exceptio/exceptio.hpp
    include/TIA_exceptio/my_assert.hpp
)

set (SOURCES 
    include/TIA_exceptio/src_exceptio/main_class.cpp
)

add_executable (EXECUTABLE 
	${ENTRYPOINT} 
	${HEADERS} 
	${SOURCES}
)