#include "Line.h"

#include <iostream>

Line::Line()
{
}


Line::~Line()
{
}

void Line::draw() const
{
    std::cout << "Draw a Line\n";
}

void Line::move() const
{
    std::cout << "Move a Line\n";
}

void Line::scale(int amount)
{
    std::cout << "Scale a Line\n";
}
