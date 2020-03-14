//
//  is_leap_year.c
//  C_language_learning
//
//  Created by mac on 2020/2/27.
//  Copyright © 2020 mac. All rights reserved.
//

#include "is_leap_year.h"

int is_leap_year (int x)
{
    if (x >= 0){
        if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)

            return 1;
        else

            return 0;
    }
}

void print_is_leap_year(int x)
{
    printf("%d\n", is_leap_year(x));
}
