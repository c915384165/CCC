//
//  rational.c
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//
//  LinuxC编程一站式学习，实现一个 用分子分母的格式来表示有理数结构题Rational
//  及相关的函数，Rational之间可以做加减乘除运算，运算结果仍然是Rational。

#include "rational.h"

struct rational_struct make_rational(int x, int y)
{
    struct rational_struct z;
    int gcd_of_xy = greatest_common_divisor(x, y);
    if (y > 0) {
        z.x = x / gcd_of_xy;
        z.y = y / gcd_of_xy;
    }
    else if  (y < 0) {
        z.y = y / gcd_of_xy * (-1);
        z.x = x / gcd_of_xy * (-1);
    }
    else {
        z.x = 0;
        z.y = 0;
    }
//    print_rational(z);
    return z;
    
}

void print_rational (struct rational_struct z)
{
    printf("%d/%d\n", z.x, z.y);
}


struct rational_struct add_rational(struct rational_struct a, struct rational_struct b)
{
    return make_rational(a.x * b.y + b.x * a.y, a.y * b.y);
}

struct rational_struct sub_rational(struct rational_struct a, struct rational_struct b)
{
    return make_rational(a.x * b.y - b.x * a.y, a.y * b.y);
}
struct rational_struct mul_rational(struct rational_struct a, struct rational_struct b)
{
    return make_rational(a.x * b.x, a.y * b.y);
}
struct rational_struct div_rational(struct rational_struct a, struct rational_struct b)
{
    return make_rational(a.x * b.y, a.y * b.x);
}

