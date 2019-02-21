#pragma once
#include "IGraphic.h"
class Dot : public IGraphic
{
public:
    Dot();
    ~Dot();
       
    virtual void draw() const override;
    virtual void move() const override;
    virtual void scale(int amount) override;

};

