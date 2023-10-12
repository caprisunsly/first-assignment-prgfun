#include <iostream>

using namespace std;

//used a struct with named variables instead of just an array with length 2 because typing Vector2.x is more obvious than Vector2[0]
struct Vector2 {
        float x;
        float y;
};

float euclidianDistance(Vector2 point1, Vector2 point2) 
{
    //simplified formula for euclidian distance
    //d = √[(x2 – x1)2 + (y2 – y1)2].

    float euclidianDist = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
    return euclidianDist;
}

//converts 2 floats to a vector2
Vector2 convertToVector2(float x, float y) {
    Vector2 vector;
    vector.x = x;
    vector.y = y;
    return vector;
}

void main()
{
    float xComponents[2] = { 0.0f, 0.0f };
    float yComponents[2] = { 0.0f, 0.0f };

    for(int i = 0; i < 2; i++)
    {
        cout << "Please enter the X component of vector " << (i + 1) << ": ";
        cin >> xComponents[i];

        cout << "Please enter the Y component of vector " << (i + 1) << ": ";
        cin >> yComponents[i];

        cout << endl;
    }

    //creates new Vector2 from user input
    Vector2 point1 = convertToVector2(xComponents[0], yComponents[0]);
    Vector2 point2 = convertToVector2(xComponents[1], yComponents[1]);
    
    //gets euclidian distance from function
    float dist = euclidianDistance(point1, point2);

    cout << "The distance between those two vectors is " << dist;


    //Build a structure in main.h capable of representing a 2D vector called Vector2. Then,
    //write a function in main.h called GetDistanceBetweenPoints which:
    //
    //- Takes two Vector2 instances via parameter
    //- Returns the Euclidean distance between the two points, as a float.
    //
    //Euclidean distance calculation is used throughout games programming, for several
    //different purposes. 

    //You should then highlight the function working correctly. The code below
    //will prompt the user for an X and Y for two vectors.
    //You should then build two Vector2s from the given x and y components, and show
    //the calculated distance between each point.
}