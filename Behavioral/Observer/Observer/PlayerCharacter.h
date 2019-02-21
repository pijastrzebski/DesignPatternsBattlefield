#pragma once

#include "IObservable.h"
#include "IObserver.h"

#include <iostream>

class PlayerCharacter : public IObservable
{

public:
    void earnExp(int amount)
    {
        std::cout << "Received exp: " << amount << '\n';
        m_exp += amount;
        std::cout << "Total exp: " << m_exp << '\n';

        for (auto& o : m_observers)
        {
            o->update(m_exp);
        }
    }

    virtual void addObserver(IObserver* observer) override
    {
        m_observers.push_front(observer);
    }


    virtual void removeObserver(const std::string& name) override
    {
        for (auto& o : m_observers)
        {
            if (o->getName() == name)
            {
                m_observers.remove(o);
                break;
            }
        }
    }


    int IObservable::getExp() const
    {
        return m_exp;
    }


private:
    int m_exp{};
};