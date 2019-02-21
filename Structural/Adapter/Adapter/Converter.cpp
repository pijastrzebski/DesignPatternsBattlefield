#include "Converter.h"


#include <memory>
#include <iostream>
#include <typeinfo>

std::unique_ptr<Mp3> Converter::convertWavToMp3(std::unique_ptr<Wav> wav) const
{
    std::cout << "Checking audio file type...";

    std::string typeName(typeid(*wav).name());

    if (typeName == "class Wav")
    {
        std::cout << "It's a wav.\n";
        std::cout << "Converting Wav -> Mp3...\n";
        std::cout << "Wav successfully converted to Mp3!\n";
    }
    else
    {
        std::cout << "Error: It's not a wav! Conversion is not possible!\n";
    }

    return std::make_unique<Mp3>();
}
