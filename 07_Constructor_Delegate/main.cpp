#include<iostream>
#include "Area.h"

using namespace std;

int main (void)
{
    Area rectangle ;
    Area square{3.0};
    Area multi(3.0,2.0);

    square.set_length(10);
    square.set_width(5);

    cout << "Area of rect is : " << rectangle.get_area() << endl;
    cout << "Area of square is : " << square.get_area() << endl;
    cout << "Area of multi is : " << multi.get_area() << endl;
    
    return 0;
}