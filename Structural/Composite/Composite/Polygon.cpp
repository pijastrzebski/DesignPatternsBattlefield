#include "Polygon.h"

#include <iostream>

Polygon::Polygon()
{
}


Polygon::~Polygon()
{
}

void Polygon::draw() const
{
    std::cout <<"Draw a polygon\n";
}

void Polygon::move() const
{
    std::cout <<"Move a polygon\n";
}

void Polygon::scale(int amount)
{
    std::cout <<"Scale a polygon\n";
}
