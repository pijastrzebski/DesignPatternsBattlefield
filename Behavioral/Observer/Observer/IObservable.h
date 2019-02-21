#pragma once

#include "IObserver.h"

#include <forward_list>

struct IObservable 
{
    virtual void addObserver(IObserver* observer) = 0;
    virtual void removeObserver(const std::string& name) = 0;

    virtual int getExp() const = 0;

    std::forward_list<IObserver*> m_observers;
};
