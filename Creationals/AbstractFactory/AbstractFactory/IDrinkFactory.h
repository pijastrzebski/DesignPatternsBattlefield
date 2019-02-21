#pragma once

#include "IDrink.h"
#include <memory>

struct IDrinkFactory
{
    virtual ~IDrinkFactory() = default;
    virtual std::unique_ptr<IDrink> make() const = 0;
};
