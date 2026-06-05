// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 
// Completed by Mark Nolan
// This uses pointers to create objects and destroy at runtime using dynamic memory 
// rather than allocating them fixed memory at time of compilation

#include <iostream>
#include <string>
// The chrono library includes functions for keeping track of time
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    // Define two new TimePoint objects pointed to by pointers
    // start and end now holde the addresses of the beginning of the start and end TimePoint objects respectively
    TimePoint *start, *end;
    // Define a new Duration object pointed to by the pointer elapsed_seconds.
    // This is done by setting the pointer to the result of calling the "Duration()" constructor
    // using the new qualifier
    Duration* elapsed_seconds = new Duration();
    std::string input;

    // start is a pointer with no value, 
    // assign it to a new TimePoint object initialized with the value of Clock::now 
    start = new TimePoint(Clock::now());

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());
    // We want to subtract the objects, and store the reult in another object not their pointers so dereference all three using indirection operator *
    // Note: end & start are TimePoint objects and TimePoint contains an override function for the '-' operator
    *elapsed_seconds = *end - *start;

    // We could call the count function as follows (*elapsed_seconds).count()
    // The brackets force the resolution of the elapsed_seconds pointer and then call the
    // count function of the result, but an equivalent syntax is to use ->
    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;
    
    // Call the destructor function of each of the created objects to free up memory
    delete start;
    delete end;
    delete elapsed_seconds;

    std::cout << std::endl << std::endl;

    return 0;
}
