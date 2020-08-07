//
//  main.cpp
//  Exercises
//
//  Created by egle nausedaite on 24/07/2020.
//  Copyright © 2020 egle nausedaite. All rights reserved.
//

#include <iostream>
#include "Recursion.hpp"
#include "Other.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    //0 1 1 2 3 5....
    cout << "Fibonacci: " << fibonacci(5) << "\n \n";
    
    cout << "Power: " << power(5, 3) << "\n \n";
    
    cout << "Factorial: " << factorial(8) << "\n \n";
    
    printIntsDownToZero(5);
    
    cout << "digits in countDigits: "<< countDigits(67876) << "\n\n";

    cout << "digits in countDigitsRec: "<< countDigits(89876) << "\n\n";
    
    cout << "sum of digits: "<< sumOfDigits(123) << "\n\n";

    cout << "triangles from dots: "<< trianglesFromDots(5) << "\n";
    
    cout << "multiplication "<< multiplication(5,9) << "\n";
    
    cout << "count zeroes: "<< countZeroes(230090) << "\n";
    
    cout << "geometric sum: "<< geometricSum(3)  << "\n";
    
    int array[] = {1,2,0,4,5};
    if (isArraySorted(array, 5))
    {
        cout << "sorted \n\n";
    }
    else
    {
        cout << "not sorted \n\n";
    }
    std::cout << "\n\n\n\nHello, World!\n";
    return 0;
}
