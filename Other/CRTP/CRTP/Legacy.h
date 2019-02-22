#pragma once

#include <iostream>

template<typename T>
class Legacy
{
public:
    void methodWithCrazyWeirdoLogic() 
    {
        T& testLegacy = static_cast<T&>(*this);
        testLegacy.crazyWeirdoLogic();
    }

    void crazyWeirdoLogic()
    {
        std::cout << "Crazy weirdo logic\n";
    }

    void methodWhichWeWantToTest()
    {
        methodWithCrazyWeirdoLogic();

        std::cout << "I am your testable method\n";
        std::cout << "What are you waiting for? Just test me!\n";
    }
};