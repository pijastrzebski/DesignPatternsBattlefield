#include <vector>

#include "Robot.h"
#include "PaintPartInBlueCommand.h"
#include "PaintPartInGreenCommand.h"
#include "PaintPartInRedCommand.h"

int main()
{
    Robot robot;
    robot.getInfo();

    PaintPartInBlueCommand doBlue(robot);
    doBlue.execute();
    robot.getInfo();

    PaintPartInGreenCommand doGreen(robot);
    doGreen.execute();
    robot.getInfo();

    PaintPartInRedCommand doRed(robot);
    doRed.execute();
    robot.getInfo();
}