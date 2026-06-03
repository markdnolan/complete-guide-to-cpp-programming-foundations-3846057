// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 
// Completed by Mark Nolan

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment - value is printed unchanged since increment is done after cout
    std::cout << "Score using postfix increment: " << player_score++ << std::endl;
    std::cout << "The score before the next increment is: " << player_score << std::endl;

    // Prefix increment - value appears to increase by 2 since previous postfix and prefix for this line are done before the value is output
    std::cout << "Score using prefix increment: " << ++player_score << std::endl;
    std::cout << "The score before the next increment is: " << player_score << std::endl;

    // Postfix decrement
    std::cout << "Lives using postfix decrement: " << player_lives-- << std::endl;
    std::cout << "The lives before the next decrement is: " << player_lives << std::endl;

    // Prefix decrement
    std::cout << "Lives using prefix decrement: " << --player_lives << std::endl;
    std::cout << "The lives before the next decrement is: " << player_lives << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}