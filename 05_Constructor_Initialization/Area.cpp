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

Area::Area()
{
    length = 0;
    width = 0;
    std::cout << "No parameter constuctor is called"<< std::endl;
}

Area::Area(float dimension): length(dimension), width{dimension}
{
    std::cout << "Intialization constructor for single value"<< std::endl;
}

Area::Area(float l, float w): length{l}, width{w}
{
    std::cout << "Intialization constructor for double value"<< std::endl;
}

Area::~Area()
{
    std::cout << "De-constuctor called"<< std::endl;
}