//
//  return.c
//  C_language_learning
//
//  Created by mac on 2020/2/27.
//  Copyright © 2020 mac. All rights reserved.
//

#include "return.h"

int is_even(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}

int is_odd(int x)
{
    if (x % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}

void print_is_even(int x)
{
    printf("%d\n", is_even(x));
}

void print_is_odd(int x)
{
    printf("%d\n", is_odd(x));
}
