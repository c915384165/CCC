//
//  factorial.c
//  C_language_learning
//
//  Created by mac on 2020/2/27.
//  Copyright © 2020 mac. All rights reserved.
//

#include "factorial.h"

int factorial(int x)
{
    if (x >= 0)
        if (x == 0)

            return 1;
        else

            return factorial(x-1) * x;
    else
//        printf("x should > 0\n");

        return 0;
}


int fibonacci(int x)
{
    if (x == 0 || x == 1)

        return 1;
    else{

        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}
