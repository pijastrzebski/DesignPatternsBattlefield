#pragma once

#include "Wav.h"

struct IRecorder
{
    virtual std::unique_ptr<Wav> record() const = 0;
    virtual void getInfo() const = 0;
};