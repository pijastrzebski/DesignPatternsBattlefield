#include "Tea.h"

#include <iostream>

Tea::Tea()
{
    std::cout << "Tea Drink\n";
}


Tea::~Tea()
{
}

void Tea::getInfo() const
{
    std::cout << "Tea Drink\n";
}
