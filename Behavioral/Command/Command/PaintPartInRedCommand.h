#pragma once

#include "ICommand.h"

class PaintPartInRedCommand : public ICommand
{
public:
    PaintPartInRedCommand(Robot& robot) :
        m_robot(robot)
    {}

    virtual void execute() const override
    {
        m_robot.m_part.m_color = "Red";
    }

private:
    Robot& m_robot;
};
