#pragma once

#include "Wav.h"
#include "Mp3.h"

class Converter
{
public:
    Converter()  = default;
    ~Converter() = default;

    std::unique_ptr<Mp3> convertWavToMp3(std::unique_ptr<Wav> wav) const;
};

