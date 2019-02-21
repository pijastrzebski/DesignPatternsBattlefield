#pragma once

struct IStrategy
{
    virtual void execute() = 0;
};