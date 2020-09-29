cmake_minimum_required(VERSION 3.18)

project(fifth 
    VERSION 1.0
    LANGUAGES CXX)

add_definitions("-std=c++17")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

set( FIFTH_LIB_SOURCES 
  src/Env.cpp
)

set( FIFTH_APP_SOURCES 
  src/fifth.cpp
)

set( BNFC_FILES
    src/fifth.cf
)

add_custom_target(bnfc COMMAND bnfc -m -o ${CMAKE_CURRENT_SOURCE_DIR}/src/gen --cpp -l ${BNFC_FILES}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(parser COMMAND make all
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/gen
)

add_executable( ${PROJECT_NAME} ${FIFTH_APP_SOURCES})
add_library(${PROJECT_NAME}Lib ${FIFTH_LIB_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}Lib  ${CONAN_LIBS})