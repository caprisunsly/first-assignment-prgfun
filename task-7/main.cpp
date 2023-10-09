#include <iostream>
#include <array>
#include <string>
using namespace std;

string classes[]{ "Spearman", "Knight", "Archer" };
int classIndex = -1;
string name;

void main()
{
    cout << "Choose a class: \n";
    
    while (classIndex < 0) 
    {
        for (int i = 0; i < sizeof(classes) / sizeof(classes[0]); i++)
        {
            cout << to_string(i) + ".  " + classes[i] + "\n";
        }
        cout << "\n";
        cin >> classIndex;
        if (classIndex < 0 || classIndex > sizeof(classes) / sizeof(classes[0])-1)
        {
            cout << "Invalid choice.\n";
            classIndex = -1;
            continue;
        }
        cout << "You have chosen the " + classes[classIndex] + " class.\n";
    }

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Player details:\n";
    cout << " - Name: " + name + "\n";
    cout << " - Class: " + classes[classIndex] + "\n";

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