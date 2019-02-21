#pragma once

#include "RTSGameAI.h"

class HumanAI final : public RTSGameAI
{

public:
    virtual void sendUnits() const
    {
        cout << "Human: Send units\n";
    }

    virtual void collectResources() const
    {
        cout << "Human: Collect resources\n";
    }

    virtual void attack() const
    {
        cout << "Human: Attack\n";
    }

    virtual void buildStructures() const
    {
        cout << "Human: Build structures\n";
    }

    virtual void buildUnits() const
    {
        cout << "Human: Build units\n";
    }

    virtual void start() const override
    {
        collectResources();
        sendUnits();
        buildUnits();
        buildStructures();
    }

};