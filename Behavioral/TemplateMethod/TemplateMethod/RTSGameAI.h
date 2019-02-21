#pragma once

#include <iostream>

using std::cout;

struct RTSGameAI
{
    virtual ~RTSGameAI() = default;

    virtual void sendUnits() const
    {
        cout << "Send units\n";
    }

    virtual void collectResources() const
    {
        cout << "Collect resources\n";
    }

    virtual void attack() const
    {
        cout << "Attack\n";
    }

    virtual void buildStructures() const
    {
        cout << "Build structures\n";
    }

    virtual void buildUnits() const
    {
        cout << "Build units\n";
    }

    virtual void start() const
    {
        cout << "Generic AI algorithms sequence\n";
    }
};