#pragma once

#include "Mp3.h"

struct IPlayer
{
    virtual ~IPlayer() = default;
    virtual void play(std::unique_ptr<Mp3> file) const = 0;
};