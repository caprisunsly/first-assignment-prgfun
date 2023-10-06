#include <iostream>
using namespace std;


void ConfigureBox(string str, int vPad, int hPad)
{
    string boxLines;
    string vPadSpace;
    string vPadStr = "";
    string hPadStr = "";
    string hPadStr2 = "";
    for (int i = 0; i < str.length() + 4 + hPad; i++)
    {
        boxLines += "*";
        if (i < str.length() + hPad) vPadSpace += " ";
    }
    for (int i = 0; i < vPad; i++) 
    {
        vPadStr += "* " + vPadSpace + " *\n";
    }
    for (int i = 0; i < hPad/2; i++)
    {
        hPadStr += " ";
        hPadStr2 += " ";
    }
    if (hPad % 2 != 0) hPadStr2 += " ";
    cout << boxLines + "\n" + vPadStr;
    cout << "* " + hPadStr + str + hPadStr2 + " *\n";
    cout << vPadStr + boxLines;
}

void main()
{
    string str;
    int vPad, hPad;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter the amount of vertical padding: ";
    cin >> vPad;
    cout << "Enter the amount of horizontal padding: ";
    cin >> hPad;
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