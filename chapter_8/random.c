//
// Created by mac on 2020/3/3.
//

#include "random.h"


int a[N];

void gen_random(int upper_bound, int add_bound) {
    int i;
    for (i = 0; i < N; i++)
        a[i] = rand() % upper_bound + add_bound;
}

void printf_random() {
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main(void) {
    gen_random(10, 0);
    printf_random();
    return 0;
}