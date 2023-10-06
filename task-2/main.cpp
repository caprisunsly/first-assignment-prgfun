#include <iostream>
#include <string>
using namespace std;

void main()
{
    string name, username, clanTag;
    int age;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello, " + name + "! \n";
    cout << "Please enter your clan tag: ";
    cin >> clanTag;
    cout << "Please enter your username: ";
    cin >> username;
    cout << "Please enter your age: ";
    cin >> age;

    cout << "- Name: " + name + "\n- Username: [" + clanTag + "]" + username + "\n- Age: " + to_string(age);

    //Add code to prompt the player for their name, and then
    //greet them with that name. For example, 
    //
    // Please enter your name: ben
    // Hello ben!
    //

    //Expand this so the player is asked for their name, clan tag,
    //age and username. Print out these details like so:
    //
    // - Name: <name>
    // - Username: [<clantag>]<username>
    // - Age: <age>
    //
    
}