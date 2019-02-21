#pragma once

#include "IStrategy.h"
#include "IAlgorithm.h"

#include <vector>
#include <initializer_list>
#include <memory>

class CoolStrategy : public IStrategy
{
public:
    CoolStrategy(std::initializer_list<IAlgorithm*> list)
    {
        for (auto& algo : list)
        {
            m_algorithms.emplace_back(algo);
        }
    }

    virtual void execute() override
    {
         for (const auto& algo : m_algorithms)
         {
             algo->veryVeryComplexAlgorithmLogic();
         }
    }

private:
    std::vector<std::unique_ptr<IAlgorithm>> m_algorithms;
};