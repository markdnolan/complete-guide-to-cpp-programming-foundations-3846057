// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 
// Completed by Mark Nolan

// directives all start with a # character
// only 1 directive per line
// directives part of the standard library don't need a path or '.h'
#include <iostream>
#include <cstdint>

// define a macro called MAX_AMMO and set it's value to 500
// NOTE: Good practice is to use ALL CAPS for macro names
// directives don't end with a ;
// NOTE: A better way of doing this would be:
// const int MAX_AMMO = 5;
// This enforces type and encasulation
#define MAX_AMMO 500
// switch to activate DEBUG, don't have to assign a value
# define DEBUG


int main(){
    // types from cstdint
    // NOTE: The assignment below is a constant expression so will be evaluated once at compile time.
    int32_t ammo = MAX_AMMO / 5;
    uint8_t health_items = 5;

// This code block only executed if 'DEBUG' exists.
// NOTE: codespace will "grey out" inactive code.
#ifdef DEBUG
    std::cout << "[DEGUG] Starting game simulation..." << std::endl;
    std::cout << "Initial ammo: " << ammo << std::endl;
    std::cout << "Initial health items: " << (int)health_items << std::endl;
    std::cout << "MAX_AMMO :" << MAX_AMMO << std::endl;
    std::cout << "Debug information complete." << std::endl;
    std::cout << std::endl << std::endl;
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    // 'cout' doesn't understand the types in cstdint so
    // need to explicily cast 'health items' to type int or it will be treated as a string of characters.
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
