cmake_minimum_required(VERSION 3.16)

project(exceptio)

option(BUILD_TEST "building test binaries" ON)

set (ENTRYPOINT
	${CMAKE_CURRENT_LIST_DIR}/example/main.cpp
)

set (HEADERS 
    ${CMAKE_CURRENT_LIST_DIR}/include/tia/exceptio.hpp
    ${CMAKE_CURRENT_LIST_DIR}/include/tia/assert.hpp
    ${CMAKE_CURRENT_LIST_DIR}/include/tia/assert_3rd.hpp
)

set (SOURCES 
    ${CMAKE_CURRENT_LIST_DIR}/src/exceptio.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/assert.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/assert_3rd.cpp
)

add_library ( ${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES} )

if(BUILD_TEST)
    add_executable( exceptio_test ${ENTRYPOINT} )
        target_link_libraries( exceptio_test ${PROJECT_NAME} )
        target_include_directories( 
            exceptio_test
            PUBLIC
                ${CMAKE_CURRENT_LIST_DIR}/include
        )
endif()