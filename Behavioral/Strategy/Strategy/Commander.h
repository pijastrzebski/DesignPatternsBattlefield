#pragma once

#include "IStrategy.h"

#include <memory>
#include <iostream>

class Commander
{
public:
    void setStrategy(IStrategy* strategy)
    {
        m_strategy = strategy;
    }

    void doTheJob()
    {
        m_strategy->execute();
    }

private:
    IStrategy* m_strategy;
};