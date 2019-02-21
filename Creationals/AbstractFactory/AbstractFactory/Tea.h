#pragma once
#include "IDrink.h"

class Tea : public IDrink
{
public:
    Tea();
    ~Tea();

    virtual void getInfo() const override;
};

