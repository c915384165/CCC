//
// Created by mac on 2020/3/3.
//

#include "random.h"

#define N 110000

int a[N];

void gen_random(int upper_bound, int add_bound)
{
    int i;
    for (i = 0; i < N; i++)
        a[i] = rand() % upper_bound + add_bound;
}

void printf_random()
{
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int how_many(int value)
{
    int count = 0, i;
    for (i = 0; i < N; i++){
        if (a[i] == value)
            ++count;
    }
    return count;
}

int run_random_main(void)
{
    int i;
    gen_random(11, 10);
    printf("value\thow many\n");
    for (i = 10; i < 21; i++){
        printf("%d\t%d\n", i, how_many(i));
    }
    return 0;
}