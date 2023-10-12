#include <iostream>
using namespace std;


void ConfigureBox(string str, int vPad, int hPad)
{

    string boxLines;
    string vPadSpace;
    string vPadStr;
    string hPadStr;

    //making the top and bottom lines the correct length
    for (int i = 0; i < str.length() + 4 + hPad; i++)
    {
        boxLines += "*";
        if (i < str.length() + hPad) vPadSpace += " ";
    }
    // adds a blank line for each vertical padding
    for (int i = 0; i < vPad; i++) 
    {
        vPadStr += "* " + vPadSpace + " *\n";
    }
    // add a space to a string for each horizontal padding
    for (int i = 0; i < hPad; i++)
    {
        hPadStr += " ";
    }
    //outputs the box
    cout << boxLines + "\n" + vPadStr;
    cout << "* " + hPadStr + str + hPadStr + " *\n";
    cout << vPadStr + boxLines;
}

void main()
{
    string str;
    //vertical and horizontal padding
    int vPad, hPad;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter the amount of vertical padding: ";
    cin >> vPad;
    cout << "Enter the amount of horizontal padding: ";
    cin >> hPad;
    //calls function ConfigureBox, which also outputs the box
    ConfigureBox(str, vPad, hPad);


    //For this challenge, produce a program which 
    //prompts the user for a string of text. When
    //this text is entered, the program should:

    //- Automatically generate a box around the text.
    //- And show it in the console.

    //This is a feature commonly seen in text-based
    //adventure games, to show speech bubbles for characters.

    //---
    //An example session:    

    //Please enter some text: blah something
    //
    // ******************
    // * blah something *
    // ******************

    //Can you also expand this so that the box can be
    //shown with some padding? Or turn it into a function?
}