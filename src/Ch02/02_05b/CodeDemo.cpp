// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 
// Exercise completed by Mark Nolan

#include <iostream>

// declare integer variables a & b as GLOBAL(outside function)
// initialize b (only) to 5
int a, b = 5;

int main(){
    // initialize boolean variable my_flag as LOCAL (inside function)
    bool my_flag;
    // set a to 7 and my_flag to logical 'false', 0.
    a = 7;
    my_flag = false;
    // output initial values of variables
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    // set my_flag to 'true', 1, but any non-zero value is treated as true
    my_flag = true;
    // ouput results of calculations, based on variable values
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    // initialize new variable 'positive' as an integer QUALIFIED as UNSIGNED
    unsigned int positive;
    // set 'positive' to a negative number (-2)
    positive = b - a;
    // output value of 'positive', 
    // prints as 4,294,967,294  (2^32-2, twos complement of -2)
    // since this is an unsigned integer.
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
