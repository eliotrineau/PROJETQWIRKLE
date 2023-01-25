cmake_minimum_required(VERSION 3.20)
project(PROJETQWIRKLE C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(PROJETQWIRKLE main.c Structures.h Macro.h tableau.c tableau.h Bibliotheques.h menu.c menu.h)
