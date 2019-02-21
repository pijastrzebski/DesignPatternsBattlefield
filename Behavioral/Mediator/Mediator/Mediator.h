#pragma once

#include "IEntity.h"

#include <iostream>
#include <initializer_list>
#include <vector>
#include <typeinfo>

class Mediator : public IEntity
{

public:
    Mediator() = default;

    virtual void getInfo() const override
    {
        std::cout << "I'm a mediator\n";
    }

    virtual void sendMessage(const IEntity& entity, std::string_view message) const override
    {
        std::cout << "Mediator sends a message to: " << typeid(entity).name() << '\n';
        entity.receiveMessage(message);
    }

    virtual void receiveMessage(std::string_view message) const override
    {
        std::cout << "Mediator received a message: " << message << "\n";
    }

    void registerEntities(std::initializer_list<IEntity*> entities)
    {
        for (auto& e : entities)
        {
            m_entities.emplace_back(e);
        }
    }

private:
    std::vector<IEntity*> m_entities;

};