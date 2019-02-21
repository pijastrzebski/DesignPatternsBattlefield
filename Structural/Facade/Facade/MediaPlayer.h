#pragma once

#include "AudioFile.h"
#include "AudioMixer.h"
#include "CodecFactory.h"
#include "MP4Codec.h"
#include "OPUSCodec.h"
#include "VideoFile.h"

#include <memory>
#include <string_view>

class MediaPlayer
{
public:
    MediaPlayer();
    ~MediaPlayer() = default;

    void play(std::string_view fileName) const;

private:
    std::unique_ptr<AudioFile> m_audioFile;
    std::unique_ptr<AudioMixer> m_audioMixer;
    std::unique_ptr<CodecFactory> m_codecFactory;
    std::unique_ptr<MP4Codec> m_MP4codec;
    std::unique_ptr<OPUSCodec> m_opusCodec;
    std::unique_ptr<VideoFile> m_videoFile;
};

