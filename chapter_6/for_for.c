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
//    int n = x;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++) {
            printf("%t");
            printf("%c", y);
            printf("%t");
        }
        printf("\n");
    }
//    int i, j;
//    for (int i = 0; i <= x, i++;){
//        printf("%c",y);
}
