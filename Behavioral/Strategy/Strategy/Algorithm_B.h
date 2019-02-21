#pragma once

#include "IAlgorithm.h"

class Algorithm_B : public IAlgorithm
{

public:
    virtual void veryVeryComplexAlgorithmLogic() override
    {
        std::cout << "Running algorithm B\n";
    }

};