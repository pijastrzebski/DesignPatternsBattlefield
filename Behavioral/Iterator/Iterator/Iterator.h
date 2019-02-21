#pragma once

#include "Element.h"

struct Iterator
{
    virtual Element& getNext() const = 0;
    virtual Element& getPrevious() const = 0;
    virtual unsigned int getCurrentPos() const = 0;
    virtual bool isEnd() const = 0;
};