//
//  get_unit.c
//  C_language_learning
//
//  Created by mac on 2020/2/26.
//  Copyright © 2020 mac. All rights reserved.
//

#include "get_unit.h"

int get_unit_of_1(int x) {
    int result;
    if (x >= 10 || x <= -10) {
        result = x % 10;
    } else if (x < 10 && x > -10) {
        result = x;
    } else {
        result = 0;
    }
    return abs(result);
}

int get_unit_of_2(int x)
{
    x = x / 10;
    int result;
    if (x == 0){
        result = 0;
    }else{
        result = get_unit_of_1(x);
    }
    return abs(result);
}

void print_unit_1(int x)
{
    printf("%d\n", get_unit_of_1(x));
}

void print_unit_2(int x)
{
    printf("%d\n", get_unit_of_2(x));
}


void print_unit_of_number(int x, int max_number)
{
    int n = 1;
    while (n <= max_number) {
        if (get_unit_of_1(n) == x || get_unit_of_2(n) == x) {
            printf("%d\n", n);
        }
        n++;
    }
}
