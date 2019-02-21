#pragma once

#include "IState.h"

struct IPlayer
{
    virtual void changeState(std::unique_ptr<IState> state) = 0;
    virtual void clickPlay() = 0;
    virtual void clickPause() = 0;
};