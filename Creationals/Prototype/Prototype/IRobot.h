#pragma once

#include <memory>

struct IRobot
{
    virtual ~IRobot() = default;
    virtual std::unique_ptr<IRobot> clone() const = 0;

    virtual void getInfo() const = 0;
};