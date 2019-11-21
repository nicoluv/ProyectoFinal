cmake_minimum_required(VERSION 3.14)

project(ProyectoFinal)

set(CMAKE_C_STANDARD 99)

include_directories(includes)

add_executable(ProyectoFinal Juego2.c Juego2.h Main.c)