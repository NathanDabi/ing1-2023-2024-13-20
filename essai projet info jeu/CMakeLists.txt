cmake_minimum_required(VERSION 3.26)
project(essai_projet_info_jeu C)

set(CMAKE_C_STANDARD 23)

add_executable(essai_projet_info_jeu main.c
        "jeu snoopy sous programme.c"
        "jeu snoopy sous programme.h")
