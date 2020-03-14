//
// Created by mac on 2020/3/6.
//

#include "call.h"

// 例8.1 定义和访问数组

void define_array_main()
{
    int count[4] = { 3, 2, }, i; // 不要被误导，这行其实是声明两个变量 一个count[4]数组，一个整型i，同时赋值数组元素index0-1
    for (i = 0; i < 4; i++) {
        printf("count[%d]=%d\n", i, count[i]);
    }
}

// 习题 1 编写一个程序,定义两个类型和长度都相同的数组,
// 将其中一个数组的所有元素拷贝给另一个。既然数组不能直接赋值,想想应该怎么实现。
void test_copy_array(void)
{
    int a[4] = {1, 2, 3, 4};
    int b[sizeof(a)];
    int i, j;
    for (int i = 0; i < 4; ++i) {
        b[i] = a[i];
    }
    for (int j = 0; j < 4; ++j) {
        printf("%d\n", b[j]);
    }
}



