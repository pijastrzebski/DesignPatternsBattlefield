#include "MediaPlayer.h"

#include <iostream>
#include <thread>
#include <chrono>

MediaPlayer::MediaPlayer() :
    m_audioFile(std::make_unique<AudioFile>()),
    m_audioMixer(std::make_unique<AudioMixer>()),
    m_codecFactory(std::make_unique<CodecFactory>()),
    m_MP4codec(std::make_unique<MP4Codec>()),
    m_opusCodec(std::make_unique<OPUSCodec>()),
    m_videoFile(std::make_unique<VideoFile>())
{
    std::cout << "Default media player components initialized\n";
}

void MediaPlayer::play(std::string_view fileName) const
{       
    using namespace std::chrono_literals;

    std::cout << "Playing a media file: " << fileName;
    std::this_thread::sleep_for(300ms);
    std::cout << ".";
    std::this_thread::sleep_for(300ms);
    std::cout << ".";
    std::this_thread::sleep_for(300ms);
    std::cout << ".";

    std::cout << "Done!\n";
}
