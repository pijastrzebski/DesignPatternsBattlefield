#pragma once

#include "IVisitor.h"
#include "Circle.h"
#include "Triangle.h"

class ShapeVisitor : public IVisitor
{

public:
    virtual void visitTriangle(Triangle* triangle) override
    {
        triangle->draw();
    }


    virtual void visitCircle(Circle* circle) override
    {
        circle->draw();
    }

};