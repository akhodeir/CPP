#include<iostream>

using namespace std;

int main()
{
    enum direction {right, left, north, south};

    direction d = south;

    switch(d)
    {
        case right: 
            cout << "I go right" << endl;
        case left :
            cout << "I go left" << endl;
        default:
            cout << "I go anyware" << endl;
    }

    if (d == south)
    {
        cout << "it is cold there" << endl;
    }
    else if (d == right)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "no valid answer" << endl;
    }
}