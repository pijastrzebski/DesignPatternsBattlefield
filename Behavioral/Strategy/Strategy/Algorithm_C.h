#pragma once

#include "IAlgorithm.h"

class Algorithm_C : public IAlgorithm
{

public:
    virtual void veryVeryComplexAlgorithmLogic() override
    {
        std::cout << "Running algorithm C\n";
    }

};