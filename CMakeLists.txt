cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(top_system_test)

add_executable(${PROJECT_NAME} main.cpp figures.cpp figures.h)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_LIST_DIR}/SFML")

find_package(SFML REQUIRED COMPONENTS System Window Graphics)

target_include_directories(${PROJECT_NAME} PRIVATE SFML_INCLUDE_DIR)

target_link_libraries(${PROJECT_NAME} PRIVATE SFML::System SFML::Window SFML::Graphics)