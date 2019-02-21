#pragma once

#include "ICommand.h"

class PaintPartInBlueCommand : public ICommand
{

public:
    PaintPartInBlueCommand(Robot& robot) :
        m_robot(robot)
    {}

    virtual void execute() const override
    {
        m_robot.m_part.m_color = "Blue";
    }

private:
    Robot& m_robot;

};
