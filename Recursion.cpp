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

int countDigitsRec(int n)
{
    int answer = 0;
    if ( n/10 < 1)
    {
        return 1;
    }
    
    countDigitsRec(n/10 - n %10);
    answer++;
    return answer;
}

int sumOfDigits(int n) //n=1234 sum==1+2+3+4
{   //base
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n < 0)
    {
        return -1;
    }
    
    //reoccurring theme:
    int lastDigit = n % 10;
    int smallAnswer = sumOfDigits(n/10 - (n%10)/10);    
    int answer = lastDigit + smallAnswer;
    return answer;
}

int trianglesFromDots(int n)
{
    //base
    if ( n == 1 || n == 0 || n == 2)
    {
        return 0;
    }
    if ( n == 4 )
    {
        return 4;
    }
    if (n == 5) //fix 5 and 6 by finding generic
    {
        return 10;
    }
    if (n == 6)
    {
        return 20;
    }
    int answer = 0;
    
    //generic solution:
    
    
    return answer;
}


int multiplication(int m, int n)
{
    if ( m == 0 || n == 0 )
    {
        return 0;
    }
    int smallAns = multiplication(m, n-1);
    int answer = smallAns + m;
    
    return answer;
}

int countZeroes(int n) /// 230030
{
    if (n == 0)
    {
        return 0;
    }
    
    int smallAnswer = countZeroes(n/10);
    if (n%10 == 0)
    {
        return smallAnswer + 1;
    }
    else
    {
        return smallAnswer;
    }
}

double geometricSum(int k)  ///k=3 => sum = 1 + 1/2 + 1/2^2 + 1/2^3
{
    if (k == 0)
    {
        return 1;
    }
    
    //rec
    double smallAnswer = geometricSum(k - 1);
    double answer = 1.0/power(2, k) + smallAnswer;
    
    return answer;
}

bool isArraySorted(int array[], int n)
{
    if (n == 1)
    {
        return true;
    }

    if (array[n] < array[n-1])
    {
        return false;
    }
    bool isSmallArraySorted = isArraySorted(array, n-1);

    return isSmallArraySorted;
}






