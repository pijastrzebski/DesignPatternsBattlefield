#pragma once

#include "IState.h"
#include "IPlayer.h"

#include <iostream>

class Player : public IPlayer
{

public:

    virtual void changeState(std::unique_ptr<IState> state) override
    {
        m_state.swap(state);
    }


    virtual void clickPlay() override
    {
        if (m_state)
        {
            m_state->clickPlay();
        }
        else
        {
            std::cout << "Set the state first\n";
        }
    }


    virtual void clickPause() override
    {
        if (m_state)
        {
            m_state->clickPause();
        }
        else
        {
            std::cout << "Set the state first\n";
        }
    }

private:
    std::unique_ptr<IState> m_state;

};