#include <iostream>
#include <array>
#include <string>
using namespace std;

//Character details, expanded into a struct because I felt like it
struct Character {
    string characterName;
    string characterClass;
    int maxHealth;
    int strength;
    int dexterity;
    int range;
};

//list of classes, initialised as an array. Ideally would pull from a text file or something
Character classes[]{ {"", "Spearman", 10, 6, 3, 6}, {"", "Knight", 12, 9, 3, 3}, {"", "Archer", 8, 3, 6, 6}};
//sets class index to -1 to force a loop of the class selection section
int classIndex = -1;

void main()
{
    cout << "Choose a class: \n";
    
    //loop for class selection
    while (classIndex < 0) 
    {
        //list all classes, which can be expanded
        for (int i = 0; i < sizeof(classes) / sizeof(classes[0]); i++)
        {
            cout << to_string(i) + ".  " << classes[i].characterClass + "\n";
        }
        cout << endl;
        //wait for class selection
        cin >> classIndex;
        //checks if the player has selected a class index between 0 and the number of classes in the array. c++ doesnt calculate array.length
        //or array.size as the number of items in the array, but the number of bytes the entire array takes up, so this fixes that
        if (classIndex < 0 || classIndex > sizeof(classes) / sizeof(classes[0])-1)
        {
            cout << "Invalid choice.\n";
            classIndex = -1;
            continue;
        }
        cout << "You have chosen the " << classes[classIndex].characterClass << " class.\n";
    }

    //prompt player name
    cout << "Please enter your name: ";
    cin >> classes[classIndex].characterName;


    //output it all to the console
    cout << "Player details:\n";
    cout << " - Name: " << classes[classIndex].characterName << "\n";
    cout << " - Class: " << classes[classIndex].characterClass << "\n";
    cout << " - Stats:\n";
    cout << "        : Strength " << classes[classIndex].strength << "\n";
    cout << "        : Dexterity" << classes[classIndex].dexterity << "\n";
    cout << "        : Range" << classes[classIndex].range << "\n";

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