//
// Created by mac on 2020/3/12.
//

#include "sort.h"

#define LEN 5
int a[LEN] = {10, 5, 2, 4, 7};

void insertion_sort()
{
    int i, j, key;
    for (j = 1; j < LEN; ++j){
        printf("{ %d, %d, %d, %d, %d }\n", a[0], a[1], a[2], a[3], a[4]);
//        printf("%d\n", j);
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key){
            a[i + 1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
    printf("{ %d, %d, %d, %d, %d }\n", a[0], a[1], a[2], a[3], a[4]);
}
