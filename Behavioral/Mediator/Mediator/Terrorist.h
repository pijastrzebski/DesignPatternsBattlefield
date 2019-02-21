#pragma once
#pragma once

#include "IEntity.h"
#include "Mediator.h"

#include <iostream>

class Terrorist : public IEntity
{

public:
    Terrorist(Mediator& mediator) :
        m_mediator(mediator)
    {}

    virtual void sendMessage(const IEntity& entity, std::string_view message) const override
    {
        std::cout << "Terrorist sends a message to Counterterrorist indirectly through Mediator\n";
        m_mediator.sendMessage(entity, message);
    }

    virtual void receiveMessage(std::string_view message) const override
    {
        std::cout << "Terrorist received a message: " << message << "\n";
    }


    virtual void getInfo() const override
    {
        std::cout << "I'm a terrorist\n";
    }

private:
    Mediator& m_mediator;
};