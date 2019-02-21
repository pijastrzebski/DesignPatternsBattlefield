#pragma once

struct IState
{
    virtual void clickPlay() = 0;
    virtual void clickPause() = 0;
};