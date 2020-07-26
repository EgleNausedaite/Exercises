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

    
    std::cout << "\n\n\n\nHello, World!\n";
    return 0;
}
