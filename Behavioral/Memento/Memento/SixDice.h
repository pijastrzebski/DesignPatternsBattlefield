#pragma once
#pragma once

#include "IDice.h"
#include "IMemory.h"

#include <random>
#include <memory>

class SixDice : public IDice
{
    friend class Memory;

public:
    SixDice(IMemory& memory) :
        m_memory(memory)
    {}

    virtual void roll() const override
    {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(1, 6);

        // save previous roll
        if (m_roll)
        {
            m_memory.saveRoll(*this);
        }

        m_roll = dist(mt);
    }
       
    virtual int getRoll() const override
    {
        return m_roll;
    }

private:
    IMemory& m_memory;

    mutable int m_roll;
};