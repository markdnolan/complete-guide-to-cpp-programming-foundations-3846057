// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 
// Exercise completed by mark Nolan

#include <iostream>
#include <typeinfo>

int main(){
    // For "auto" to work, must assign an inital value to variable that unambigously implies the type of the variable 
    auto score = 8;  // type should be i - integer
    auto points = 12345678901; // type should be l - long since this is more than 32 bits
    auto height = 6.2f; // type should be f - floating point - it has a trailing f
    auto duration = 90.00;// type should be d - double, since this is the default floating poit type
    auto is_active = true; // type should be b - boolean
    auto initial = 'p'; // type should be c - char, char types are a single character enclosed in single quotes
    auto title = "Football Champions"; // type should be PKc (Pointer to const char) - string, strings are enclosed in double quotes
    auto type = typeid(points).name();

    // typeid(<variable>).name() returns the type of a variable
    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of points is " << typeid(points).name() << std::endl;
    std::cout << "The type of height is " << typeid(height).name() << std::endl;
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    std::cout << "The type of title is " << typeid(title).name() << std::endl;
    // Just for kicks, let's look at the type of the test of a variable type (it's a string, PKc)
    std::cout << "The type of typeid(<var>).name() is " << typeid(type).name() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
