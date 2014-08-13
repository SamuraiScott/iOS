//
//  main.c
//  Turkey
//
//  Created by Scott on 2014-08-12.
//  Copyright (c) 2014 ScottMaile. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // Declare the variable called 'weight' of type float
    float weight;
    
    //Store a number in that variable
    weight = 14.2;
    
    //Log it to the user
    printf("The turkey weights %f.\n", weight);
    
    //Declare another variable of type float
    float cookingTime;
    
    //Calculate the cooking time and store it in the variable
    //In this case, '*' means 'Multiplied by'
    cookingTime = 15 + 15.0 * weight;
    
    //Log that to the user
    printf("cook it for %f hours.\n", cookingTime / 60);
           
    //End this function and indicate success
    return 0;
}

