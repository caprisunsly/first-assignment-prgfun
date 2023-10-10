#include <iostream>

using namespace std;

struct component {
    string name;
    int grade;
    int percentageWorth;
};

component assessments[5]{ 
    {"Assessment 1, Component 1: Completion of programming challenges", 0, 70}, 
    {"Assessment 1, Component 2: Reflective journal", 0, 30},
    {"Assessment 2, Component 1: Development of text based game", 0, 60},
    {"Assessment 2, Component 2: Code quality and practices", 0, 20},
    {"Assessment 2, Component 3: Demonstration of broad range of techniques", 0, 20} };

void main()
{
    for (int i = 0; i < 5; i++) {
        cout << "Provide your grade for " << assessments[i].name << ": ";
        cin >> assessments[i].grade;
        cout << endl;
    }
    cout << "Percentage for assessment 1: " << ();
    cout << "Percentage for assessment 2: " << ();

    //Add code to build a grade calculator for the module. This should:
    //
    // - Prompt the user for input, for the grade of each component of assessment 1
    // - Prompt the user for input, for the grade of each component of assessment 2
    // - Provide a detailed breakdown of:
    //      - List the overall percentage of each assessment
    //      - Their overall grade after percentage weighting
    //      - Output which CRG band they fit into, for each criterion

    //Invalid input should be detected and handled after prompting. For example,
    //if the input grade "-1" is given, the user should be reprompted to enter the
    //grade again.

    //Furthermore, please use structs and arrays where appropriate to model
    //the different assessment components.
    //..


}