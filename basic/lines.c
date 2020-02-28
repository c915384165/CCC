//
//  lines.c
//  C_language_learning
//
//  Created by mac on 2020/2/26.
//  Copyright © 2020 mac. All rights reserved.
//

#include "lines.h"

void newline(void)
{
    printf("\n");
}

void threeline(void)
{
    newline();
    newline();
    newline();
}

void print_time(int hour, int minute)
{
    if (hour >= 0 && hour <=23 && minute >=0 && minute <=59)
        printf("%d:%d\n", hour, minute);
    else
        printf("wrong number\n");
}
