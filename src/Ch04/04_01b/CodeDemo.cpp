// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 
// Completed by Mark Nolan

#include <iostream>

//# define LEVEL_COUNT 4

int main(){
    // define a constant of type size_t - a special type for array sizes
    const size_t LEVEL_COUNT = 4;
    // define an array called enemies, with 4 integer elements
    int enemies[LEVEL_COUNT];
    // define an array called levelDifficulty, with 4 floating point elements
    // and assign an initial value to each one
    // Notes:
    // no number in square brackets, length is set by number of elements assigned values
    // Don't specify values as 'float' using trailing F, so they are doubles.
    // They are converted to floats on creation of array, this works, but be careful to make sure
    // that compiler can safely perform conversion of be explicit with types in {}
    // Can't use 'auto' as a type for an array, implicet conversion based on typew in {} doesn't work!
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};
    
    // the addresses of elements in an array start at 0, so they are 0-3
    // assign a value to each element in the arrayt
    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    //output the value of each element in the level array
    std::cout << "The game has " << LEVEL_COUNT << " levels:" << std::endl;
    std::cout << "Level 1: " << enemies[0] << " enemies." << std::endl;
    std::cout << "Level 2: " << enemies[1] << " enemies." << std::endl;
    std::cout << "Level 3: " << enemies[2] << " enemies." << std::endl;
    std::cout << "Level 4: " << enemies[3] << " enemies." << std::endl;

    std::cout << std::endl;

    //output the value of each element in the difficulty array
    std::cout << "For each level, the difficulty factor is:" << std::endl;
    std::cout << "Level 1: " << levelDifficulty[0] << std::endl;
    std::cout << "Level 2: " << levelDifficulty[1] << std::endl;
    std::cout << "Level 3: " << levelDifficulty[2] << std::endl;
    std::cout << "Level 4: " << levelDifficulty[3] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
