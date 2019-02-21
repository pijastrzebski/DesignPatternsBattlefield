#include "TeaFactory.h"
#include "Tea.h"
#include <iostream>

std::unique_ptr<IDrink> TeaFactory::make() const
{
    std::cout << "Tea factory makes a drink: ";
    return std::make_unique<Tea>();
}
