// Complete Guide to C++ Programming Foundations
// Exercise 04_02
// Pointers, by Eduardo Corpeño 
// Completed by Mark Nolan

#include <iostream>
#include <string>

int main(){
    int a = 37;
    // declare a pointer using leading *, int tells us that the data at the location pointed
    // to by ptr is an integer
    int *ptr;
    
    // nullptr is a special type that means no valid address, rather than null which is 0
    // having all initialized pointers using null would point them to memory address 0x00000000
    // which could be very bad!
    ptr = nullptr;
    // The above line could have been chaged to this but I wanted to leave in place the explanation
    // of nullptr
    ptr = &a;

    // This is just the value of variable a, an integer
    std::cout << "The value of a is:              " << a << std::endl;
    // This is the value of ptr, which, since it's a pointer, is an address
    std::cout << "ptr is pointing to address:     " << ptr << std::endl;
    // This uses the leading & to say 'The address of a'
    std::cout << "The address of a is:            " << &a << std::endl;
    // This line uses the leading * to say 'The contents of the address pointed to by ptr'
    // Since the pointer is defined as int, the contents of the address pointed
    // to by the pointer are treated as an integer.
    std::cout << "Where ptr is pointing, we have: " << *ptr << std::endl;
    // This line uses the leading & to say 'The address of ptr'
    std::cout << "The address of ptr is:          " << &ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
