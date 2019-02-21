#pragma once

struct IDrink
{   
    virtual ~IDrink() = default;
    virtual void getInfo() const = 0;
};

