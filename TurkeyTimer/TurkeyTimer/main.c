//
//  main.c
//  TurkeyTimer
//
//  Created by Scott on 2014-08-12.
//  Copyright (c) 2014 ScottMaile. All rights reserved.
//

#include <stdio.h>

void showCookTimeForTurkey( int pounds )
{
    int necessaryMinutes = 15 + 15 * pounds;
    printf("cook for %d minutes.\n", necessaryMinutes);
    if (necessaryMinutes > 120) {
        int halfway = necessaryMinutes / 2;
        printf("Rotate after %d of the %d minutes.\nThen you eat it!", halfway, necessaryMinutes);
    }
}

int main(int argc, const char * argv[])
{
    int totalWeight = 10;
    int gibletsWeight = 1;
    int turkeyWeight = totalWeight - gibletsWeight;
    showCookTimeForTurkey(turkeyWeight);
    return 0;
}

