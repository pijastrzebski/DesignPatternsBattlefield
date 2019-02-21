#pragma once

#include <string>
#include <iostream>

struct IFileFormat
{
    virtual ~IFileFormat() = default;
    virtual void getInfo() const = 0;

    std::string m_name;

    int m_length;
    int m_bitsPerSample;
    int m_sampleRate;
    int m_channels;
};
