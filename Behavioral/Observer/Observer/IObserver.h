#pragma once

#include "IObservable.h"

#include <string>

struct IObserver
{
    virtual const std::string& getName() const = 0;
    virtual void update(int exp) = 0;
};

