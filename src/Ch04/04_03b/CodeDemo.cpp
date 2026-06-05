// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 
// Completed by Mark Nolan

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    // The compiler interprets the name of an array in a pointer definition to mean
    // "The address of the first element in the array"
    int* scorePtr = highScores;   // Pointer initialized to the address of the array
    // A longer way to write the line above is:
    // int* scorePtr = &highScores[0];
    // This reads as "define a pointer whose value is the address of highScores element 0"

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer

    // Display the second high score using pointer, 
    // notice that Pointer value isn't changed the + 1 isn't assigned back to the pointer value
    // also the + 1 actually increments 4 addresses since there are 4 bytes to an integer
    // and the array was defined as holding integer values
    std::cout << "Second high score using pointer: " << *(scorePtr + 1) << std::endl;  
    
    // Here , we're directly addressing an element in the highScores array using the pointer name
    // with an offset just as if the pointer was an array name.
    // This reads as "add the offset inside the square backets, multiplied by the size of the 
    // array elements, to the pointer and then dispay the contents of that address"
    std::cout << "Third high score using array notation: " << scorePtr[2] << std::endl;  

    // Remember, array sizes & types can't be changed at runtime, but array contents and pointers
    // can, so you can use the same pointer to point to different arrays during program execution.

    std::cout << std::endl << std::endl;
    return 0;
}
