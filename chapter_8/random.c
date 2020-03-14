//
// Created by mac on 2020/3/3.
//

#include "random.h"
// 8.2 数组应用实例：统计随机数
// 8.2 生成打印随机数

#define N 20 //定义了一个全局常量 N;
int a[N]; // 声明了一个数组a，元素个数为N；

/*
 * gen_random   -   生成一个随机数数组（元素为整数）
 *
 * upper_bound: 随机数的上限范围，当为10时为0～9中任意整数；
 * add_bound: 补充范围控制数，配合upper_bound使用，比如当需要10～19时候，则在0~9范围内+10即可；
 *
 * 生成一个整数随机数的数组a[N]，并指定单个元素的取值范围。
 * */
void gen_random(int upper_bound, int add_bound) // 函数：生成随机数
{
    int i;
    for (i = 0; i < N; i++)
        a[i] = rand() % upper_bound + add_bound;
}
/*
 *      printf_random   -   打印随机数数组a[N]
 *
 * 遍历gen_random生成的数组a[N]，中的每个元素，用printf函数显示；
 * */
void printf_random()
{
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}
/*
 *      print_my_main_random    -   打印我的随机函数，方便main函数调用的子函数
 *
 *  调用gen_random() 传入参数（10， 10）生成a[N]；
 *  调用printf_random() 打印输出数组；
 * */
int print_my_main_random(void) {
    gen_random(10, 0);
    printf_random();

    return 0;
}
