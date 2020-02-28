//
//  rational.h
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//

#ifndef rational_h
#define rational_h

#include "gcd.h"
#include <stdio.h>
//#include "gcd.h"

struct rational_struct {
    int x, y;
};


struct rational_struct make_rational(int x, int y); // 创建一个分数体 要取最简方式
struct rational_struct add_rational(struct rational_struct a, struct rational_struct b); // 两个分数相加
struct rational_struct sub_rational(struct rational_struct a, struct rational_struct b); // 减
struct rational_struct mul_rational(struct rational_struct a, struct rational_struct b); // 乘
struct rational_struct div_rational(struct rational_struct a, struct rational_struct b); // 除
void print_rational(struct rational_struct z); // 打印

#endif /* rational_h */
