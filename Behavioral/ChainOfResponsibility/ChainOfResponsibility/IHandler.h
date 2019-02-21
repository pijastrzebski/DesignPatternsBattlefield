#pragma once

#include "IRequest.h"

#include <iostream>

struct IHandler
{
    virtual void setNext() = 0;
    virtual void handle(const IRequest& request) = 0;
};