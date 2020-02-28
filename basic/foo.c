//
//  foo.c
//  C_language_learning
//
//  Created by mac on 2020/2/26.
//  Copyright © 2020 mac. All rights reserved.
//

#include "foo.h"

void foo(void)
{
    int i = 0;
    {
        int i = 3;
        int j = 1;
        int k = 2;
        printf("j:%d\nk:%d\ni:%d\n",j,k,i);
    }
    printf("i:%d\n", i);
}
