#include <iostream>
using namespace std;

//class CharacterClass
//{
//public:
//    int maxHealth;
//    int skrumblyness;
//
//    int strength;
//    int charisma;
//    int dexterity;
//    int intelligence;
//};
//
//CharacterClass Spearman{10, 4, 15, 12, 10, 7};
//CharacterClass Knight{12, 6, 10, 15, 12, 7 };
//CharacterClass Archer{9, 2, 12, 7, 15, 10};

string classes[]{ "Spearman", "Knight", "Archer" };

void main()
{
    for (string a : classes)
    {

    }

    //Using structs and arrays, build a character class and name selection system
    //for a text-based game. The program should firstly prompt the user for a class
    //using a numbered menu system. For example:

    // Please choose a character class below:
    // 1. Spearman
    // 2. Knight
    // 3. Archer
    //
    // > 3
    // - You have selected the Archer character class.

    //The character class names and amount are up to you, but should make 
    //use of an array so the solution can be easily extended. Invalid menu choices
    //should also be handled.

    //The user should then be prompted for their in-game name, and then their
    //player details should be shown. These details should be stored in a struct,
    //so player details can be a) easily extended to encompass more player detail
    //types in the future and b) logically exist in one structure.
    
    //The prompt should be shown like below:

    // Please enter your name: ben
    //
    // Player details:
    // - Name: ben
    // - Class: Knight
}