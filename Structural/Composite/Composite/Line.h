#pragma once
#include "IGraphic.h"
class Line : public IGraphic
{
public:
    Line();
    ~Line();

    virtual void draw() const override;
    virtual void move() const override;
    virtual void scale(int amount) override;

};

