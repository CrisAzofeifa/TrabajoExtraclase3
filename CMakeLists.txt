cmake_minimum_required(VERSION 3.9)
project(busquedas)

set(CMAKE_CXX_STANDARD 11)

add_executable(busquedas main.cpp Secuencial.cpp Secuencial.h Binaria.cpp Binaria.h Interpolacion.cpp Interpolacion.h)