#include "Coffee.h"

#include <iostream>

Coffee::Coffee()
{
    std::cout << "Coffee Drink\n";
}


Coffee::~Coffee()
{
}

void Coffee::getInfo() const
{
    std::cout << "Coffee Drink\n";
}
