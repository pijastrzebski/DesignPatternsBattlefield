#pragma once

#include "IEntity.h"
#include "Mediator.h"

#include <iostream>
#include <string_view>

class Counterterrorist : public IEntity
{

public:
    Counterterrorist(Mediator& mediator) :
        m_mediator(mediator)
    {}

    virtual void sendMessage(const IEntity& entity, std::string_view message) const override
    {
        std::cout << "Counter sends a message to Terrorist indirectly through Mediator\n";
        m_mediator.sendMessage(entity, message);
    }

    virtual void getInfo() const override
    {
        std::cout << "I'm a Counterterrorist\n";
    }


    virtual void receiveMessage(std::string_view message) const override
    {
        std::cout << "Counter received a message: " << message << "\n";
    }

private:
    Mediator& m_mediator;
};