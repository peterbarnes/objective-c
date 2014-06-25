//
//  main.c
//  Addresses
//
//  Created by Peter Barnes on 6/7/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    float *addressOfI = &i;
    printf("i stores its value at %p\n", &i);
    printf("This function starts at %p\n", main);
    printf("The int stored at addressOfI is %d\n", *addressOfI);
    *addressOfI = 89.0;
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(float *));
    return 0;
}

