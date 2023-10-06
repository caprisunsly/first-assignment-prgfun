#include "main.h"
#include "string"

using namespace std;

int numberToGuess;
int guessedNumber = -1;
int numberOfGuesses;
void skrumbler();

void main()
{
    //The code in this file has been produced to show you how to seed
    //a random number generator, and use it. In main.h, we are using
    //C++'s <random> library to generate random numbers.

    //This can be done with srand() and rand(), but we have opted for
    //using a modern C++ approach. It gives you much more control
    //over the random numbers generated.

    //-----------
    //Expand the current solution to build a random number guessing game.
    //The game should produce a random number between 0-100, and ask users
    //for their guess. Based on their guess, the game should:

    //- Say "freezing" if the number is plus or minus 50 from the guess.
    //- Say "colder" if the number is plus or minus 35 from the guess.
    //- Say "cold" if the number is plus or minus 25 from the guess.
    //- Say "warm" if the number is plus or minus 15 from the guess.
    //- Say "warmer" if the number is plus or minus 10 from the guess.
    //- Say "hot" if the number is plus or minus 5 from the guess.
    //- Say "boiling" if the number is plus or minus 2 from the guess.

    //Once the user has submitted a guess, the program should show them
    //one of these strings and prompt them for another guess.

    //Alternatively, if the guess is correct, a success message should be shown,
    //telling the player they have won.

    //At the end of the program, it should also display the number of guesses
    //the player needed to guess the value in.     

    numberToGuess = random(0, 100);
    cout << "The mystical Skrumbler has a game for you. He has picked a random number from 0 to 100 and you must guess it!!\n";

    while (guessedNumber != numberToGuess)
    {
        cout << "Guess a number: ";
        cin >> guessedNumber;

        if (guessedNumber > 100 || guessedNumber < 0 || !cin) 
        {
            cout << "Invalid number, please guess an integer between 0 and 100\n";
            continue;
        }

        skrumbler();
    }

    cout << "The Skrumbler declares that you have won! The number was " + to_string(numberToGuess) + ". You took " + to_string(numberOfGuesses) + " foolish guesses.\n\n";
}

void skrumbler() 
{
    numberOfGuesses++;

    int difference = abs(guessedNumber - numberToGuess);

    if (difference >= 50) cout << "The Skrumbler says you are freezing.\n\n";
    else if (difference >= 35) cout << "The Skrumbler says you are colder.\n\n";
    else if (difference >= 25) cout << "The Skrumbler says you are cold.\n\n";
    else if (difference >= 15) cout << "The Skrumbler says you are warm.\n\n";
    else if (difference >= 10) cout << "The Skrumbler says you are warmer.\n\n";
    else if (difference >= 5) cout << "The Skrumbler says you are hot.\n\n";
    else if (difference >= 1) cout << "The Skrumbler says you are boiling.\n\n";

    //- Say "freezing" if the number is plus or minus 50 from the guess.
    //- Say "colder" if the number is plus or minus 35 from the guess.
    //- Say "cold" if the number is plus or minus 25 from the guess.
    //- Say "warm" if the number is plus or minus 15 from the guess.
    //- Say "warmer" if the number is plus or minus 10 from the guess.
    //- Say "hot" if the number is plus or minus 5 from the guess.
    //- Say "boiling" if the number is plus or minus 2 from the guess.
}