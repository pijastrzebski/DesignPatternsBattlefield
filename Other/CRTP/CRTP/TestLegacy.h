#pragma once

#include "Legacy.h"

class TestLegacy : public Legacy<TestLegacy>
{
public:
    void crazyWeirdoLogic() { std::cout << "There's no crazy weirdo logic at this time...How this is possible?\n"; }
};