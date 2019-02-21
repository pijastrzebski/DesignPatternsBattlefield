#pragma once

#include "Robot.h"

struct ICommand
{
    virtual void execute() const = 0;
};