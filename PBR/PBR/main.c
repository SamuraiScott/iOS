//
//  main.c
//  PBR
//
//  Created by Scott on 2014-08-13.
//  Copyright (c) 2014 ScottMaile. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    double pi = 3.14;
    double intergerPart;
    double fractionalPart;
    
    //pass the address of intergerPart as an argument
    fractionalPart = modf(pi, &intergerPart);
    
    //find the value stored in intergerPart
    printf("intergerPart = %.0f, fractionalPart = %.2f\n", intergerPart, fractionalPart);
    return 0;
}

