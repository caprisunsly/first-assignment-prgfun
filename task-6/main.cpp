#include "main.h"
#include "string"

using namespace std;

int numberToGuess;
int guessedNumber = -1;
int numberOfGuesses;
void skrumbler();

void main()
{
    //generates a random number
    numberToGuess = random(0, 100);
    cout << "The mystical Skrumbler has a game for you. He has picked a random number from 0 to 100 and you must guess it!!\n";

    //loop until the user guesses the right number
    while (guessedNumber != numberToGuess)
    {
        cout << "Guess a number: ";
        cin >> guessedNumber;

        //if the number is invalid, prompt a guess again without incrementing the guess counter.
        if (guessedNumber > 100 || guessedNumber < 0 || !cin) 
        {
            cout << "Invalid number, please guess an integer between 0 and 100\n";
            continue;
        }

        //check how close the number is to the random number
        skrumbler();
    }

    cout << "The Skrumbler declares that you have won! The number was " << numberToGuess << 
        ". You took " << numberOfGuesses << " foolish guesses.\n\n"; 
}

void skrumbler() 
{
    //increment the number of guesses
    numberOfGuesses++;

    //calculate the difference, uses abs to convert any negatives to positive
    int difference = abs(guessedNumber - numberToGuess);

    //uses conditionals to check how far away the number is. would have used a switch statement here but this was faster and switch statements
    //dont allow for > or >=
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