#include <iostream>

using namespace std;

struct Vector2 {
        float x;
        float y;
};

float euclidianDistance(Vector2 point1, Vector2 point2) 
{
    //d = √[(x2 – x1)2 + (y2 – y1)2].

    float euclidian = pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2);
    float distance = sqrt(euclidian);
    return distance;
}

Vector2 convertToVector(float x, float y) {
    Vector2 vector;
    vector.x = x;
    vector.y = y;
    return vector;
}

void main()
{
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

    Vector2 point1;
    Vector2 point2;

    point1 = convertToVector(xComponents[0], yComponents[0]);
    point2 = convertToVector(xComponents[1], yComponents[1]);
    
    float dist = euclidianDistance(point1, point2);

    cout << "The distance between those two vectors is " << dist;

    //You should then build two Vector2s from the given x and y components, and show
    //the calculated distance between each point.
}