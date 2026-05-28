// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>


// Define an enumerated class called character_role
// (protagonist=0, antagonist=1, sidekick=2, npc=3)
enum class character_role {protagonist, antagonist, sidekick, npc};

// Define a strcture (collection of data elements) called game_character
// The structure contains a sting called 'name', an integer called 'level'
// and a character_role emumerated class called 'role'.
struct game_character{
    std::string name;
    int level;
    character_role role;
};

int main(){
    //Create an instance of the game_character structure called 'buddy'
    game_character buddy;
    // Set the 'name' string in 'buddy' to "Tony"
    buddy.name = "Tony";
    // Set the level integer in 'buddy' to 10
    buddy.level = 10;
    // Set the role character_role in 'buddy' to sidekick, which has a value of 2
    buddy.role = character_role::sidekick;

    std::cout << "The game has a character named " << buddy.name << " who is a level " << buddy.level << " and is a " << (int) buddy.role << " character." << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
