#include <iostream>
#include <string>

using namespace std;


string sentenceCase(string text) 
{
    bool nextLetterCapitalise = true;
    string newStr = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (nextLetterCapitalise && isalnum(text[i]))
        {
            newStr += toupper(text[i]);
            nextLetterCapitalise = false;
        }
        else if (text[i] == '.')
        {
            newStr += text[i];
            nextLetterCapitalise = true;
        }
        else newStr += text[i];
    }
    return newStr;
}

string upperCase(string text) 
{
    string newStr = "";
    for (int i = 0; i < text.length(); i++)
    {
        newStr += toupper(text[i]);
    }
    return newStr;
}

string lowerCase(string text)
{
    string newStr = "";
    for (int i = 0; i < text.length(); i++)
    {
        newStr += tolower(text[i]);
    }
    return newStr;
}

void main()
{
    string text;
    int modification;
    bool modified = false;
    cout << "Please enter some text: ";
    getline(cin, text);

    while (!modified)
    {
        cout << "What would you like to do to the text?\n - 1: Sentence Case\n - 2: UPPER CASE\n - 3: lower case\n";
        cin >> modification;

        modified = true;

        if (modification == 1) cout << sentenceCase(text);
        else if (modification == 2) cout << upperCase(text);
        else if (modification == 3) cout << lowerCase(text);
        else 
        {
            modified = false;
            cout << "Please use a valid menu option.\n";
        }
    }

    // hello. i am a robot. beep boop.
    //Make a program which converts any given string to sentence
    //case. For example:

    // Please enter some text: hello this is a sentence. and here is another. and another.
    //
    // > Hello this is a sentence. And here is another. And another.

    //The program should be able to work regardless of whitespace between
    //period characters. Note that proper nouns shouldn't be considered here, just
    //the rule that if a character is after a period, it should be capitalised.

    //Additionally, you should expand the solution to:
    //
    // - Show the given text in sentence case, lowercase, or uppercase
    // - Detect if the text has no alphabetical characters, and if so, show a warning
    //
    // e.g.

    // Please enter some text: hello this is another sentence. blah. something else.
    //
    // - Sentence case: Hello this is another sentence. Blah. Something else.
    // - Lowercase: hello this is another sentence. blah. something else.
    // - Uppercase: HELLO THIS IS ANOTHER SENTENCE. BLAH. SOMETHING ELSE.
    //

}