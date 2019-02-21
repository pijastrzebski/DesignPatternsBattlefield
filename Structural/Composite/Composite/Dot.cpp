#include "Dot.h"

#include <iostream>

Dot::Dot()
{
}


Dot::~Dot()
{
}

void Dot::draw() const
{
    std::cout << "Draw a Dot\n";
}

void Dot::move() const
{
    std::cout << "Move a Dot\n";
}

void Dot::scale(int amount)
{
    std::cout << "Scale a Dot\n";
}