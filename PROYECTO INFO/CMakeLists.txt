cmake_minimum_required(VERSION 3.14)
project(SegundoParcialPROYECTO)

set(SFML_STATIC_LIBRARIES TRUE)
set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS system window graphics)

add_executable(SegundoParcialPROYECTO main.cpp snake.cpp snake.h)
target_link_libraries(SegundoParcialPROYECTO sfml-system sfml-window sfml-graphics -static)