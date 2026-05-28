// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// enumerations data type assigns a sequence of integers to a list of names (called emumerators) starting at 0
// so texture = 0, sound = 1 etc
// declare enumeration classes so that they are strongly typed and scoped
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    asset_type asset_value; // declare asset_value local variable with 'asset_type' type
    menu_section menu_value; // declare menu_value local variable of type 'menu_section'
    int sound = 8;  // local variable sound set to value of 8 overrides global enumeration

    asset_value = asset_type::sound;  // local variable of type 'asset_type'
    menu_value = menu_section::sound; // local variable of type 'menu_section'

    // std::cout doesn't understand variables with types 'asset_type' or 'menu_section'
    // so need to cast these to integers to display
    std::cout << "asset_value = " << (int) asset_value << std::endl;
    std::cout << "menu_value = " << (int) menu_value << std::endl;
    std::cout << "sound (local) = " << sound << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
