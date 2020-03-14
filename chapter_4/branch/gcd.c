//  Use Euclid method get the GCD Geatest Common Divisor
//  gcd.c
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//  用递归方法计算最小公倍数。

#include "gcd.h"

/* 计算最大公倍数 */
/* 用递归方法 */
/* 参数：a，b两个任意整数 */
/* 返回值：最大公倍数 */
int greatest_common_divisor(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a >= b)
        if (a % b == 0)
            return b;
        else
            return greatest_common_divisor(b, a % b);
    else
        return greatest_common_divisor(b, a);
}

/* 计算最大公倍数 */
/* 使用循环的方法*/
/* 参数：a，b两个任意整数 */
/* 返回值：最大公倍数 */
int gcd_2(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a < b){
        int c;
        c = a;
        a = b;
        b = c;
    }
    while ( a % b != 0){
        a = b;
        b = a % b;
    }
    return (b);
}