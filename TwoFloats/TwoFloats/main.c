//
//  main.c
//  TwoFloats
//
//  Created by Peter Barnes on 6/5/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float number1;
    number1 = 3.2;
    
    float number2;
    number2 = 4.5;
    
    double sum;
    sum = number1 + number2;
    
    printf("The sum of the two floats is %f\n", sum);
    
    return 0;
    
}

