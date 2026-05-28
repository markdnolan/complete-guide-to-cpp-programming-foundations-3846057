// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 
// Exercise completed by Mark Nolan

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;


    // Perform conversion using only integers
    // PROBLEM: Compliler calcilates 5 / 9 (since it's a constant) and uses only integer arithmetic
    // so 5/9 as an integer is 0.
    celsius = (5 / 9) * (fahrenheit - 32);
    // PROBLEM FIXED: make at least one number float (in this case both to demonstrate different approaches)
    celsius = (static_cast<float>(5) / 9.0) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;
    
    // Notice that we can decalre a variable anywhere in the code
    float weight = 10.99;
    double accurate_weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Double         : " << accurate_weight << std::endl;
    // Static cast to an integer to get the integer component.
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    // Static cast to integer to get integer component, then subtract that from the original
    // to get the fractional component, multiply result by 10,000 to get the first 4 decimal places
    // as the integer component of the result, then static cast to integer to remove the remaining decimals.
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;
    std::cout << "Fractional part using double: " << (int)((accurate_weight - (int)accurate_weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
