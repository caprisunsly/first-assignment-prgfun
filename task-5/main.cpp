#include <iostream>
#include <string>
using namespace std;

void main()
{
    string text;
    string compareStr = ".";
    cout << "Please enter some text: ";
    getline(cin, text);

    string modifiedText = text;

    for(int i = 0; i < text.length(); i++) 
    {
        if (text[i] == compareStr[0])
        {
            cout << modifiedText;
            if (i + 2 < text.length()) modifiedText = toupper(text[i + 2]);
            else break;
        }
    }

    modifiedText = toupper(modifiedText[0]);

    cout << "\n\n> " + modifiedText;
    
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