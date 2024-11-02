#include<iostream>
#include "Area.h"

using namespace std;

int main (void)
{
    Area square ;
    square.set_length(10);
    square.set_width(5);

    cout << "Area of square is : " << square.get_area() << endl;

    return 0;
}