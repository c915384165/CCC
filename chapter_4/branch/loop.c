//  C语言的循环，Loop
//  loop.c
//  C_language_learning
//
//  Created by mac on 2020/2/27.
//  Copyright © 2020 mac. All rights reserved.
//

#include "loop.h"

int factorial_loop(int n)
{
    int result = 1;
    while (n > 0){
        result = result * n;
        n--;
//        n = n - 1;
    }

    return result;
}


// do while 习题1，当改变 i < n 时候 要同样的结果
int factorial_do_while(int n)
{
    int result = 1;
    int i = 1;
    do {
        result = result * i;
        i = i + 1;
    } while (i <= n);

    return result;
}

int factorial2_do_while(int n)
{
    int result = 1;
    int i = 1;
    do {
        i = i + 1;
        result = result * i;
    } while (i < n);

    return result;
}
