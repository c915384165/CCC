//  例4.1 switch 语句的用法
//  print_day.c
//  C_language_learning
//
//  Created by mac on 2020/2/27.
//  Copyright © 2020 mac. All rights reserved.
//

#include "print_day.h"
void print_day(int x)
{
    x = abs(x) % 7;
    switch(x){
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    default:
            printf("Please input the right number!\n");
    }
}
