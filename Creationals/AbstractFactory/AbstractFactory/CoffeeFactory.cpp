#include "CoffeeFactory.h"

#include "Coffee.h"
#include <iostream>

CoffeeFactory::CoffeeFactory()
{

}


CoffeeFactory::~CoffeeFactory()
{
}

std::unique_ptr<IDrink> CoffeeFactory::make() const
{
    std::cout << "Coffee factory makes a drink: ";
    return std::make_unique<Coffee>();
}
