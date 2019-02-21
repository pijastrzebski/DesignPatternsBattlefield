#pragma once

#include "RTSGameAI.h"

class UndeadAI final: public RTSGameAI
{

public:
    virtual void sendUnits() const
    {
        cout << "Undead: Send units\n";
    }

    virtual void collectResources() const
    {
        cout << "Undead: Collect resources\n";
    }

    virtual void attack() const
    {
        cout << "Undead: Attack\n";
    }

    virtual void buildStructures() const
    {
        cout << "Undead: Build structures\n";
    }

    virtual void buildUnits() const
    {
        cout << "Undead: Build units\n";
    }

    virtual void start() const override
    {
        sendUnits();
        attack();
        buildStructures();
        buildUnits();
    }
};