#pragma once

#include "IDice.h"

struct IMemory
{
    virtual int getPreviousRoll() const = 0;
    virtual void saveRoll(const IDice& dice) = 0;
};