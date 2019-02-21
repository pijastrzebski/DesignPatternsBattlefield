#pragma once

#include "IPlayer.h"
#include "IState.h"

#include <iostream>

class PlayState : public IState
{
public:
    PlayState(IPlayer& player) :
        m_player(player)
    {}

    virtual void clickPlay() override
    {
        std::cout << "You are already playing something!\n";
    }

    virtual void clickPause() override
    {
        std::cout << "Player paused\n";
    }

private:
    IPlayer& m_player;
};