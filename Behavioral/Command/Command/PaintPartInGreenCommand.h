#pragma once

#include "ICommand.h"

class PaintPartInGreenCommand : public ICommand
{

public:
    PaintPartInGreenCommand(Robot& robot) :
        m_robot(robot)
    {}

    virtual void execute() const override
    {
        m_robot.m_part.m_color = "Green";
    }

private:
    Robot& m_robot;
};
