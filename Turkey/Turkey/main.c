//
//  main.c
//  Turkey
//
//  Created by Peter Barnes on 6/5/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Declare the varibale 'weight' of type float
    float weight;
    
    // Store a number in the variable
    weight = 14.2;
    
    //Log it to the user
    printf("The turkey weights %f.\n", weight);
    
    //Declare another variable of type float
    float cookingTime;
    
    //Calculate the cooking time and store it in the variable
    cookingTime = 15.0 + 15.0 * weight;
    
    //Log it to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    return 0;
}

