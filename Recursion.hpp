//
//  Recursion.hpp
//  Exercises
//
//  Created by egle nausedaite on 24/07/2020.
//  Copyright © 2020 egle nausedaite. All rights reserved.
//

#ifndef Recursion_hpp
#define Recursion_hpp

#include <stdio.h>
#include <iostream>
//create a function which returns an nth number of Fibonacci sequence:
int fibonacci(int n);

//create a function which calculates x to the power of n
int power(int x, int n);

//function factorial(n)
int factorial(int n);

//function to list int until 0 numbers below n
void printIntsDownToZero(int n);

//function to count digits in a number n
int countDigitsRec(int n);

//counts a sum of digits of a number n
int sumOfDigits(int n);

//how many triangles from n dots?
int trianglesFromDots(int n);

int multiplication(int m, int n);

int countZeroes(int n);

double geometricSum(int k);

bool isArraySorted(int array[], int n);




#endif /* Recursion_hpp */
