#include "DeltaRobot.h"

int main()
{
    DeltaRobot deltaRobot("Red", "JuniorRobot", 66);
    deltaRobot.getInfo();

    auto clonedDeltaRobot = deltaRobot.clone();
    clonedDeltaRobot->getInfo();
}