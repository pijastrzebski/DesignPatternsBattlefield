#pragma once

struct IGraphic
{
    virtual ~IGraphic() = default;

    virtual void draw() const = 0;
    virtual void move() const = 0;
    virtual void scale(int amount)  = 0;
};