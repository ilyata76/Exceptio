# MAKES LIBRARY
# MIN VERSION
cmake_minimum_required(VERSION 3.16)

# SET PROJECT
project(exceptio)

set (ENTRYPOINT
	./example/main.cpp
)

set (HEADERS 
    ./src/exceptio.hpp
    ./src/assert.hpp
)

set (SOURCES 
    ./src/exceptio.cpp
)

# add_executable(${PROJECT_NAME}
# 	${ENTRYPOINT}
# 	${HEADERS}
# 	${SOURCES}
# )

add_library ( ${PROJECT_NAME} STATIC 
    ${HEADERS} ${SOURCES}
)

add_executable(
    test
    ${ENTRYPOINT}
)

target_link_libraries(test ${PROJECT_NAME})