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
add_executable(ccc main.c ${SOURCE_FILES} ${SOURCES} chapter_1/hello_world.c chapter_1/hello_world.h chapter_2/assignment.c chapter_2/assignment.h chapter_3/function_basic.c chapter_3/function_basic.h chapter_6/while.c chapter_6/while.h chapter_6/do_while.c chapter_6/do_while.h chapter_6/break_continue.c chapter_6/break_continue.h chapter_6/for_for.c chapter_6/for_for.h chapter_8/random.c chapter_8/random.h chapter_8/multi_dimentional_Array/mda.c chapter_8/multi_dimentional_Array/mda.h chapter_8/array_basic/call.c chapter_8/array_basic/call.h chapter_9/ex_source.c chapter_9/ex_source.h chapter_11/sort.c chapter_11/sort.h point/learn_point.c point/learn_point.h)