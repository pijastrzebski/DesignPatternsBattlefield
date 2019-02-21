#pragma once

#include "IShape.h"
#include "IVisitor.h"

#include <iostream>

class Circle : public IShape
{

public:
    virtual void acceptVisitor(IVisitor* visitor) override
    {
        visitor->visitCircle(this);
    }


    virtual void draw() override
    {
        std::cout << "Draw Circle\n";
    }
};