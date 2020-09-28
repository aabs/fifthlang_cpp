#Specify the version being used aswell as the language
cmake_minimum_required(VERSION 3.18)
#Name your project here
project(fifth 
    VERSION 1.0
    LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Sends the -std=c99 flag to the gcc compiler
#This tells CMake to fib.c and name it fibonacci

set( FIFTH_SOURCES 
  src/fifth.cpp
  src/Env.cpp
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

add_executable( ${PROJECT_NAME} ${FIFTH_SOURCES})