// Complete Guide to C++ Programming Foundations
// Challenge 02_13
// Data Types, by Eduardo Corpeño 
// Exercise completed by Mark Nolan

#include <iostream>
#include <cstdint>

int add_int(float a, double b, long double c){
    int result = 0;
    // Cast all the input variables to integers
    int a_int = static_cast<int>(a);
    int b_int = static_cast<int>(b);
    int c_int = static_cast<int>(c);

    // Output the results of the static casts to check
    std::cout << "Normalized a: " << a_int << std::endl;
    std::cout << "Normalized b: " << b_int << std::endl;
    std::cout << "Normalized c: " << c_int << std::endl;

    // Perform addition on integer versions of input variables
    result = a_int + b_int + c_int;    
    return result;
}

int main(){
    float a = 2.1;
    double b = 3.9;
    long double c = 4.6;

    int learnerResult = add_int(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;

    // Check by running the function again with the second set of example variables
    a = -2;
    b = -3.9;
    c = 4.6;

    learnerResult = add_int(a, b, c);

    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
