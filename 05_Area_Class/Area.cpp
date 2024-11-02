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