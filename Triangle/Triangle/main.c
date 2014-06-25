//
//  main.c
//  Triangle
//
//  Created by Peter Barnes on 6/6/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

float angleA;
float angleB;

float calculateAngle(angleA, angleB)
{
    float triangle = 180;
    float angles = angleA + angleB;
    float remainder = triangle - angles;
    return remainder;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = calculateAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

