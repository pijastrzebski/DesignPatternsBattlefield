#pragma once

struct IVisitor;

struct IShape
{
    virtual void acceptVisitor(IVisitor* visitor) = 0;

    virtual void draw() = 0;
};