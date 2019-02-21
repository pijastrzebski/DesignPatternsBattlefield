#pragma once

#include "IObserver.h"
#include <iostream>

class TalentTree : public IObserver
{

public:
    virtual const std::string& getName() const override
    {
        return "TalentTree";
    }


    virtual void update(int exp) override
    {
        if (exp > 100 * m_level)
        {
            std::cout << "Level Up! " << m_level;
            ++m_level;
            std::cout << " -> " << m_level << '\n';
        }
    }

private:
    int m_level{ 1 };

};