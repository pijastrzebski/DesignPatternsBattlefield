#pragma once

class Circle;
class Triangle;

struct IVisitor
{
    virtual void visitTriangle(Triangle* triangle) = 0;
    virtual void visitCircle(Circle* circle) = 0;
};