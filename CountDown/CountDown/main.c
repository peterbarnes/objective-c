//
//  main.c
//  CountDown
//
//  Created by Peter Barnes on 6/7/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 99;
    while (i > 0) {
        printf("%d\n", i);
        i -= 3;
        if (i % 5 == 0) {
            printf("Found one!\n");
        }
    }
    
    return 0;
}

