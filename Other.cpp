//
//  Other.cpp
//  Exercises
//
//  Created by egle nausedaite on 24/07/2020.
//  Copyright © 2020 egle nausedaite. All rights reserved.
//

#include "Other.hpp"

int countDigits(int n)
{
    int answer = 0;
    if ( n / 10 < 1)
    {
        return 1;
    }
    if ( n / 10 < 10)
    {
        return 2;
    }
    while ( n / 10 > 1 )
    {
        answer++;
        n = (n / 10) - (n % 10);
    }
    answer++;
    return answer;
}
