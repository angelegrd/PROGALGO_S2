cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)

project(TD02)

# On indique que l'on veut créer un exécutable "ex01" compilé à partir du fichier td01_ex01.cpp
add_executable(ex01 "src/exo01.cpp")
add_executable(ex02 "src/exo02.cpp")
add_executable(exo03 "src/exo03.cpp")
