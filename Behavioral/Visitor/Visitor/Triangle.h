#pragma once

#include "IShape.h"
#include "IVisitor.h"

class Triangle : public IShape
{

public:
    virtual void acceptVisitor(IVisitor* visitor) override
    {
        visitor->visitTriangle(this);
    }

    virtual void draw() override
    {
        std::cout << "Draw Triangle\n";
    }
};