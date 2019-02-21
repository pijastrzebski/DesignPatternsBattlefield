#pragma once
#include "IDrinkFactory.h"
class CoffeeFactory :
    public IDrinkFactory
{
public:
    CoffeeFactory();
    ~CoffeeFactory();

    virtual std::unique_ptr<IDrink> make() const override;

};

