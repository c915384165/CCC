//
// Created by mac on 2020/2/28.
//

#include "assignment.h"


void test_assignment() {
    char first_letter;
    int hour;
    int minute;
    first_letter = 'a';
    hour = 11;
    minute = 59;
    char second_letter;
    second_letter = 'b';
    int seconds;
    seconds = 30;
    int mini_second;
    mini_second = 50;
    double a_float_point;
    a_float_point = 3.52;
    char test_sign;
    test_sign = '?';
    char test_sign_2;
    test_sign_2 = '\?';
    printf("%c\n", first_letter);
    printf("%c\n", second_letter);
    printf("%d\n", hour);
    printf("%d\n", minute);
    printf("%d\n", mini_second);
    printf("%d\n", seconds);
    printf("%f\n", a_float_point);
    printf("%c%c\n", test_sign, test_sign_2);
}

// 5 表达式
// 习题 1 ceiling


int my_ceiling(int x, int y) {
    if (x % y == 0)
        return x / y;
    else
        return x / y + 1;
}
