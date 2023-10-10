#include <iostream>
#include <string>

using namespace std;

//realised this wasnt necessary as long as i used << to concatenate strings instead of +

//// remove trailing zeroes from float to make it look nicer when output to console
//string removeTrailingZeros(float number)
//{
//    string str = to_string(number);
//    // check for decimal point
//    if (str.find('.') != std::string::npos)
//    {
//        // remove zeroes
//        str = str.substr(0, str.find_last_not_of('0') + 1);
//        // remove decimal point if it is the last character
//        if (str.find('.') == str.size() - 1)
//        {
//            str = str.substr(0, str.size() - 1);
//        }
//    }
//    return str;
//}

void main()
{
    //Add code to prompt a user for a single number, and then show
    //the square of that number. For example, imagine the session:

    // What number do you want to Square? 5
    // > 5 squared is 25.

    float number, numberSq;
    string numStr = "", numSqStr = "";
    cout << "Input a number to be squared: \n";
    cin >> number;
    numberSq = number * number;
    cout << number << " squared is " << numberSq;
}