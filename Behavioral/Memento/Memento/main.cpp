#include "SixDice.h"
#include "Memory.h"

#include <iostream>

int main()
{
    Memory memory;
    SixDice dice(memory);

    dice.roll();
    std::cout << "Dice roll: " << dice.getRoll() << '\n';

    dice.roll();
    std::cout << "Dice roll: " << dice.getRoll() << '\n';

    std::cout << "Previous dice roll: " << memory.getPreviousRoll() << '\n';  

    dice.roll();
    std::cout << "Dice roll: " << dice.getRoll() << '\n';

    std::cout << "Previous dice roll: " << memory.getPreviousRoll() << '\n';

}