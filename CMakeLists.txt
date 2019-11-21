cmake_minimum_required(VERSION 3.14)

project(ProyectoFinal)

set(CMAKE_C_STANDARD 99)

include_directories(includes)

add_executable(ProyectoFinal Main1.c Juego1.h Juego1.c)
add_executable(ProyectoFinal Main2.c Juego2.h Juego2.c)
add_executable(ProyectoFinal Main3.c Juego3.h Juego3.c)
