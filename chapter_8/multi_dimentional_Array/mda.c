//
// Created by mac on 2020/3/5.
//

#include "mda.h"

/*
 * print_m_array    -   测试多维数组的定义，声明，访问元素
 *
 * */
void print_m_array() {
    int a[3][2] = {1, 2, 3, 4, 5};
    int b[][2] = {{3, 4},
                  {3, 4},
                  {3, 4},
                  {3, 4}};
    printf("%d\n", b[0][0]);
    printf("%d\n", b[0][1]);
    printf("%d\n", b[1][0]);
    printf("%d\n", b[1][1]);
    printf("%d\n", b[2][0]);
    printf("%d\n", b[2][1]);
    printf("%d\n", b[3][0]);
    printf("%d\n", b[3][1]);
}
/*
 * print_day_array  -   用数组方法替代之前的switch语句来实现输入数字，打印星期几。
 *
 * int day: 取值范围在1～7, 为了打印英文形式星期几
 * */
void print_day_array(int day) {

    /* 定义一个二维数组，8行10列，每行存取一个字符串*/
    char days[8][10] = {"",
                        "Monday",
                        "Tuesday",
                        "Wednesday",
                        "Thursday",
                        "Friday",
                        "Saturday",
                        "Sunday"};

    /* 判断day的取值, 当不在范围内时候，打印错误, 正确则打印星期的字符串*/
    if (day < 1 || day > 7)
        printf("Illegal day number\n");
    else
        printf("%s\n", days[day]);
}
/*
 * test_array   -   测试二维数组的使用
 *
 */
void test_array(void) {
    /* 定一个一个二维字符串数组, 行数不确定，列数为10(10个字符长度） */
    char a[][10] = {
            "",
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };
    /* 遍历数组，打印字符串*/
    int i;
    for (i = 0; i < 8; ++i) {
        printf("%s\n", a[i]);
    }
    int b[][3] = {
            {1, 3, 5},
            {2, 3, 5},
            {3, 3, 5},
    };
    printf("%d\n", b[1][2]);
}
/*
 *  猜拳游戏    -   输入数字 0 1 2 代表 剪刀 石头 布，程序会不停运行，输入ctrl+c 结束
 */
void fist_game(void) {
    /* 二维数组，3行10列，分别存入三个字符串*/
    char gesture[3][10] = {
            "scissor",
            "stone",
            "cloth",
    };

    /* 声明四个整形变量 */
    int man, computer, result, ret;

    /* srand函数输入随机数种子 */
    srand(time(NULL));
    /* 打印随机数种子 */
    printf("time(NULL):%d\n", time(NULL));

    while (1) {

        computer = rand() % 3;
        printf("\nInput your gesture (0-scissor, 1-stone, 2-cloth):\n");
        ret = scanf("%d", &man);

        /* 判断 scanf的返回值是否为1，如果不是1 则报错*/
        /* 判断 man的取值范围是否在 0， 1， 2 否则报错 */
        if (ret != 1 || man < 0 || man > 2) {
            printf("Invalid input! Please input input 0, 1, 2.\n");
            continue;
        }

        printf("Your gesture: %s\t Computer's gesture: %s\n", gesture[man], gesture[computer]);
        result = (man - computer + 4) % 3 - 1;
        if (result > 0)
            printf("You win!\n");
        else if (result == 0) {
            printf("Draw!\n");
        } else {
            printf("Your lose!\n");
        }
    }
}

