//
// Created by mac on 2020/3/2.
//

#include "for_for.h"

void print_99(void)
{
    int i, j;
    for (i = 1; i <= 9; i++){
        for (j = 1; j <= i; j++){
            printf("%d\t\t", j * i);
        }
        printf("\n");
    }
}

void print_diamond(int x, char y)
{
    int n = 1;
    x = 3;
    for (int i = 1; i <= n; i++) {
        print_char_times('\t', 1);
        print_char_times(y, 1);
        print_char_times('\t', 1);
        printf("\n");
    }
    for (int i = 1; i <= n; i++) {
        print_char_times('\t', 0);
        print_char_times(y, 1);
        print_char_times('\t', 1);
        print_char_times(y, 1);
        print_char_times('\t', 1);
        print_char_times(y, 1);
        print_char_times('\t', 0);
        printf("\n");
    }
    for (int i = 1; i <= n; i++) {
        print_char_times('\t', x - 2);
        print_char_times(y, x);
        print_char_times('\t', x - 2);
        printf("\n");
    }
//    int i, j;
//    for (int i = 0; i <= x, i++;){
//        printf("%c",y);
}

void print_char_times(char c, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
}

void print_two_char_times(char c, char d, int n) {
    for (int i = 0; i < n; i++) {
        print_char_times(c, 1);
        print_char_times(d, 1);
    }
}