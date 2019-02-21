#pragma once

#include "IPlayer.h"
#include "IState.h"

#include <iostream>

class PauseState : public IState
{
public:
    PauseState(IPlayer& player) :
        m_player(player)
    {}

    virtual void clickPlay() override
    {
        std::cout << "Player should play now something!\n";
    }

    virtual void clickPause() override
    {
        std::cout << "Player already paused\n";
    }

private:
    IPlayer& m_player;
};
