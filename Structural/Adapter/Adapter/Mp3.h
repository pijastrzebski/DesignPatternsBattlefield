#pragma once

#include "ICompressedFileFormat.h"

#include <iostream>

class Mp3 : public ICompressedFileFormat
{

public:
    ~Mp3() {}

    virtual void getInfo() const override
    {
        std::cout << "It's a Mp3\n";
    }

};
