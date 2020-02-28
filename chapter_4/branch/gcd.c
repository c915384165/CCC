//  Use Euclid method get the GCD Geatest Common Divisor
//  gcd.c
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//  用递归方法计算最小公倍数。

#include "gcd.h"

int greatest_common_divisor(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a >= b)
        if (a % b == 0)
            return b;
        else
            return greatest_common_divisor(b, a % b);
//    else if (a < b)
//        if (b % a == 0)
//            return a;
//        else
//            return greatest_common_divisor(a, b % a);
//    else
//        return 0;
    else
        return greatest_common_divisor(b, a);
}
