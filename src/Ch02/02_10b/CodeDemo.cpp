// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 
// Exercise completed by Mark Nolan

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45;
    sprite_x = target_x;  // Implied cast to signed integer
    player_x = sprite_x;  // Implied cast to unsigned long integer

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    // Outputs large 2's complement version of -123
    std::cout << "Player X (uint32_t): " << player_x << std::endl;
    // Cast this to a signed integer to see -123
    std::cout << "Player X (cast to int32_t): " << static_cast<int32_t>(player_x) << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
