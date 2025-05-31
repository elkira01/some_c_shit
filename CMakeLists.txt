cmake_minimum_required(VERSION 3.31)
project(student C)

set(CMAKE_C_STANDARD 11)

add_executable(student src/main.c
        src/headers/student.h
        src/headers/student_list.h
        src/sources/student_list.c
        src/sources/student.c
        src/headers/date.h
        src/sources/date.c
)
