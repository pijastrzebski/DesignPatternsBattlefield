#pragma once

#include "IFileFormat.h"

class Wav : public IFileFormat
{
public:
    ~Wav() {}

    virtual void getInfo() const override
    {
        std::cout << "It's a Wav\n";
    }

};

