/*
 *  ex_source.c
 *
 *  LinuxC编程一站式学习 第九章 编码风格 2. 注释
 *
 *  Copyright (C) 2020-2025 Todd Ren
 *
 *  2020-03-06  Modified by Todd Ren
 */

#include "ex_source.h"

/**
 *      chapter_9main   -   main of chapter 9 example
 *
 *      parameter: void
 *
 *
 */
int chapter_9main(void)
{
    char gesture[3][10] = {"scissor", "stone", "cloth"};
    int man, computer, result, ret;
    srand(time(NULL));
    while (1) {
        computer = rand() % 3;
        printf("\nInput your gesture (0-scissor 1-stone 2- cloth):\n");
        ret = scanf("%d", &man);
        if (ret != 1 || man < 0 || man > 2) {
            printf("Invalid input! Please input 0, 1 or 2.\n");
            continue;
        }
        printf("Your gesture: %s\tComputer's gesture: %s\n",
               gesture[man], gesture[computer]);
        result = (man - computer + 4) % 3 - 1;
        if (result > 0)
            printf("You win!\n");
        else if (result == 0)
            printf("Draw!\n");
        else
            printf("You lose!\n");
    }

    return 0;
}
