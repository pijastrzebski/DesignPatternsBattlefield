#pragma once

#include "IRobot.h"

#include <string>
#include <iostream>

class Robot : public IRobot
{
public:
    struct Part
    {
        std::string m_color{"Silver"};
    };

    Part m_part;

    virtual void getInfo() const override
    {
        std::cout << "Current Robot parts color: " << m_part.m_color << "\n";
    }

};