#pragma once
#include "IDrink.h"
class Coffee : public IDrink
{
public:
    Coffee();
    ~Coffee();

    virtual void getInfo() const override;
};

