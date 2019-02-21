#pragma once
#include "IDrinkFactory.h"

class TeaFactory : public IDrinkFactory
{
public:
    TeaFactory() = default;
    ~TeaFactory() = default;

    virtual std::unique_ptr<IDrink> make() const override;

};

