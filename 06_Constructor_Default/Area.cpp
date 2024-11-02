#include<iostream>
#include "Area.h"

void Area::set_length(float len)
{
    length = len;
}

void Area::set_width(float w)
{
    width = w;
}

float Area::get_area(void)
{
    return (length * width);
}

Area::Area(float l, float w): length{l}, width{w}
{
    std::cout << "Intialization constructor for double value"<< std::endl;
}

Area::~Area()
{
    std::cout << "De-constuctor called"<< std::endl;
}