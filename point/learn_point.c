//
// Created by mac on 2020/3/13.
//

#include "learn_point.h"
/*
 * 1. * 指针运算符（或"间接访问"运算符）， * p 代表指针变量 p 指向的对象；
 * 2. & 取地址运算符。&a是变量a的地址；
 * 3. %p 打印地址的方式；
 * 4. <type> * <point_name>; 定义指针变量；
 * 5. NULL 空指针 0x0；
 * 6. 指针运算相关
 *
 * */



/* 5. 测试NULL空指针 */

void test_NULL_point() {
    int *ptr = NULL;
    printf("ptr:%p\n", ptr);
    if (!ptr) {
        printf("ptr is NULL\n");
    } else {
        printf("ptf is NOT NULL\n");
    }
}

/* 变量值互换 */
/* 参数：输入两个变量的指针 */
/* 返回：null，交换两个变量的值 */
void swap_value(int *point_1, int *point_2) {
    int temp;
    temp = *point_1;
    *point_1 = *point_2;
    *point_2 = temp;
}

//void exchange_value(int *q1, int *q2, int *q3)
//void exchange_value(int *q1, int *q2)
//{
////    printf("test exchange\n");
//    if (*q1 < *q2)
//        swap_value(*q1, *q2);
////    if (*q1 < *q3)
////        swap_value(*q1, *q3);
////    if (*q2 < *q3)
////        swap_value(*q2, *q3);
//}

/* 测试 swap（）函数如何改变两个变量的值 */

void test_swap() {
    int a, b;
    int *pointer_1, *pointer_2;
//    scanf("%d, %d\n", &a, &b);
    a = 44;
    b = 55;
//    printf("get a b from scanf.\n");
    printf("a: %d, b: %d\n", a, b);
    pointer_1 = &a;
    pointer_2 = &b;
    printf("pointer_1: %p, pointer_2: %p\n", pointer_1, pointer_2);

    if (a < b) {
        swap_value(pointer_1, pointer_2);
    }
    printf("swap a b value while a < b\n");
    printf("a: %d, b: %d\n", a, b);
}

//void test_exchage()
//{
//    int a, b, c;
//    int *pointer_1, *pointer_2, *pointer_3;
////    scanf("%d, %d\n", &a, &b);
//    a = 44;
//    b = 55;
//    c = 66;
////    printf("get a b from scanf.\n");
//    printf("a: %d, b: %d, c: %d\n", a, b, c);
//    pointer_1 = &a;
//    pointer_2 = &b;
//    pointer_3 = &c;
//    printf("pointer_1: %p, pointer_2: %p, pointer_3: %p\n", pointer_1, pointer_2, pointer_3);
//    exchange_value(pointer_1, pointer_2, pointer_3);
//    printf("exchange a b c value  \n");
//    printf("a: %d, b: %d, c: %d\n", a, b, c);
//}
//
