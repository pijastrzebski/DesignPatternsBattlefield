#include "SuperFancyPlayer.h"

#include <iostream>
#include <typeinfo>
#include <thread>
#include <chrono>

void SuperFancyPlayer::play(std::unique_ptr<Mp3> file) const
{
    using namespace std::chrono_literals;

    std::cout << "Warning: Super Fancy Player is able to play only *.mp3\n";
    std::cout << "Checking audio file type...";

    std::string typeName(typeid(*file).name());

    if (typeName == "class Mp3")
    {
        std::cout << "It's a mp3.\n";
        std::cout << "Playing mp3...";

        // a little bit of redundancy in the highly complicated logic
        std::this_thread::sleep_for(500ms);
        std::cout << ".";
        std::this_thread::sleep_for(500ms);
        std::cout << ".";
        std::this_thread::sleep_for(500ms);
        std::cout << ".";
        std::this_thread::sleep_for(500ms);
        std::cout << ".";
        std::this_thread::sleep_for(500ms);
        std::cout << ".";
        std::this_thread::sleep_for(500ms);
        std::cout << ".";

        std::cout << "Wav successfully converted to Mp3!\n";
    }
    else
    {
        std::cout << "Error: It's not a wav! Conversion is not possible!\n";
    }

}
