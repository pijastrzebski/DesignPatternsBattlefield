#pragma once

struct IDice
{
    virtual void roll() const = 0;
    virtual int getRoll() const = 0;
};