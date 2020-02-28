cmake_minimum_required(VERSION 3.15)
project(ccc C)

set(CMAKE_C_STANDARD 99)
file(GLOB SOURCES
        chapter_5/circle_area.c
        chapter_5/circle_area.h
        struct/complex.c
        struct/complex.h
        struct/complex2.c
        struct/complex2.h
        chapter_4/branch/factorial.c
        chapter_4/branch/factorial.h
        basic/foo.c
        basic/foo.h
        chapter_4/branch/gcd.c
        chapter_4/branch/gcd.h
        chapter_4/if_else_if/get_unit.c
        chapter_4/if_else_if/get_unit.h
        chapter_5/is_leap_year.c
        chapter_5/is_leap_year.h
        basic/lines.c
        basic/lines.h
        chapter_4/branch/loop.c
        chapter_4/branch/loop.h
        chapter_4/branch/print_day.c
        chapter_4/branch/print_day.h
        chapter_4/branch/rational.c
        chapter_4/branch/rational.h
        basic/return.c
        basic/return.h
        )
add_executable(ccc main.c ${SOURCE_FILES} ${SOURCES} chapter_1/hello_world.c chapter_1/hello_world.h chapter_2/assignment.c chapter_2/assignment.h chapter_3/function_basic.c chapter_3/function_basic.h)