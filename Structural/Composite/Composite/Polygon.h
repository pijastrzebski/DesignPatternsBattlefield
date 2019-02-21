#pragma once
#include "IGraphic.h"
class Polygon : public IGraphic
{
public:
    Polygon();
    ~Polygon();

    virtual void draw() const override;
    virtual void move() const override;
    virtual void scale(int amount) override;

};

