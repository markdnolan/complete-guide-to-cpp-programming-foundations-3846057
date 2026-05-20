// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño
// Challenge completed by Mark Nolan 

#include <iostream>
// Include the standard library "string" function to use string variables
#include <string>

int main(){
    // define a string variable called 'name'
    std::string name;
    // std::flush ensures all ouput is sent to stdout before moving on
    std::cout << "Enter your name: " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you " << name << "!" << std::endl;
    // Two linefeeds to distinguish program messages from debugger messages when code is run
    std::cout << std::endl << std::endl;
    // function type is 'int' so need to return an integer
    return 0;
}