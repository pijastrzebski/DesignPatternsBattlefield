#pragma once

#include "IMemory.h"

class Memory : public IMemory
{

public:
    virtual int getPreviousRoll() const override
    {
        return m_lastRoll;
    }


    virtual void saveRoll(const IDice& dice) override
    {
        m_lastRoll = dice.getRoll();
    }

private:
    int m_lastRoll{};
};