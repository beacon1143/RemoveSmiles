cmake_minimum_required(VERSION 3.1)

project(RemoveSmiles)

set(REMOVE_SMILES_SRC main.cpp RemoveSmiles.cpp)
set(REMOVE_SMILES_HDR RemoveSmiles.hpp)

#add_library(vector STATIC ${VECTOR_SRC} ${VECTOR_HDR})
add_executable(${PROJECT_NAME} ${REMOVE_SMILES_SRC} ${REMOVE_SMILES_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")