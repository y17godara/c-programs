// Find Quandrant of the coordinate  point
// Write a program to accept a coordinate point in an XY coordinate system ans determine in
// which quadrant the coodinate points lies
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    if (X == 0 && Y == 0)
    {
        cout << "Origin";
    }
    else if (Y == 0)
    {
        cout << "x axis";
    }
    else if (X == 0)
    {
        cout << "y axis";
    }
    else if (X > 0 && Y > 0)
    {
        cout << "1st Quadrant";
    }
    else if (X < 0 && Y > 0)
    {
        cout << "2nd Quadrant";
    }
    else if (X < 0 && Y < 0)
    {
        cout << "3rd Quadrant";
    }
    else if (X > 0 && Y < 0)
    {
        cout << "4th Quadrant";
    }

    return 0;
}