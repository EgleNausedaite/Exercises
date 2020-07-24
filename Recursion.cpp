//
//  Recursion.cpp
//  Exercises
//
//  Created by egle nausedaite on 24/07/2020.
//  Copyright © 2020 egle nausedaite. All rights reserved.
//

#include "Recursion.hpp"


int fibonacci(int n) // 0 1 1 2 3 5 8 13 21...
{
    //base
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    //small ans
    int smallAns = fibonacci(n-1);
    int smallAns2 = fibonacci(n-2);
    
    int answer = smallAns + smallAns2;
    return answer;
}

int power(int x, int n) //x^(n-1)*x
{
    if ( x == 0 )
    {
        return 0;
    }
    if ( n == 0 )
    {
         return 1;
    }
    if (x == 1)
    {
        return 1;
    }
    
    int smallAns = power(x, n - 1);
    
    int answer = x * smallAns;
    return answer;
}

int factorial(int n) //n! == n*(n-1)!
{
    if (n == 0)
    {
        return 1;
    }
    
    int smallAnswer = factorial(n - 1);
    int answer = smallAnswer * n;
    return answer;
}

void printIntsDownToZero(int n) /// 5 ----> 5,4,3,2,1
{
    if ( n == 0 )
    {
        return;
    }
    //std::cout << n << "\n";
    printIntsDownToZero(n - 1);
    std::cout << n << "\n";
}




