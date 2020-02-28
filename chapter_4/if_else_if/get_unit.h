//  第四章 第一部分  if 分支 习题，求一个整数的个位和十位值；
//  问题：负数返回的应该是负数还是绝对值呢？
//  get_unit.h
//  C_language_learning
//
//  Created by mac on 2020/2/26.
//  Copyright © 2020 mac. All rights reserved.
//

#ifndef get_unit_h
#define get_unit_h

#include <stdio.h>
#include <stdlib.h> // abs()函数

int get_unit(int x); // 求个位数
int get_unit_of_2(int x); // 求十位数字
void print_unit_1(int x); // 打印个位
void print_unit_2(int x); // 打印十位
void print_unit_of_number(int x, int max_number);

#endif /* get_unit_h */
