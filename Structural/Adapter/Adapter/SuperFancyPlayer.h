#pragma once
#include "IPlayer.h"

class SuperFancyPlayer : public IPlayer
{
public:
    SuperFancyPlayer()  = default;
    ~SuperFancyPlayer() = default;

    virtual void play(std::unique_ptr<Mp3> file) const override;

};

