#include "ShapeVisitor.h"
#include "Circle.h"
#include "Triangle.h"

int main()
{
    ShapeVisitor visitor;
    Circle circle;
    Triangle triangle;

    circle.acceptVisitor(&visitor);
    triangle.acceptVisitor(&visitor);    
}

