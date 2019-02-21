#pragma once

#include "IAlgorithm.h"

#include <iostream>

class Algorithm_A : public IAlgorithm
{

public:
    virtual void veryVeryComplexAlgorithmLogic() override
    {
        std::cout << "Running algorithm A\n";
    }

};