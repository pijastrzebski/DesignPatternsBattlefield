#include <iostream>
#include "Counterterrorist.h"
#include "Terrorist.h"

using namespace std;

int main()
{
    Mediator mediator;
    Terrorist terrorist(mediator);
    Counterterrorist counterterrorist(mediator);

    mediator.registerEntities({ &terrorist, &counterterrorist });

    terrorist.sendMessage(counterterrorist, "Hello My Friend");
    counterterrorist.sendMessage(terrorist, "Hello Terrorist");
}