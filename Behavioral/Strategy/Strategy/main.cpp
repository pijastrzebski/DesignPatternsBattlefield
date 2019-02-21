#include "Algorithm_A.h"
#include "Algorithm_B.h"
#include "Algorithm_C.h"
#include "Commander.h"
#include "CoolStrategy.h"

#include <memory>

int main()
{
    Commander commander;
    CoolStrategy coolStrategy( { new Algorithm_A, new Algorithm_B} );

    commander.setStrategy(&coolStrategy);
    commander.doTheJob();

    CoolStrategy coolerStrategy({ new Algorithm_A, new Algorithm_C, new Algorithm_B });

    commander.setStrategy(&coolerStrategy);
    commander.doTheJob();

}