#include "AudioRecorder.h"

#include <iostream>
#include <memory>

std::unique_ptr<Wav> AudioRecorder::record() const
{
    std::cout << "Audio Recorder: Record audio to *.wav format\n";
    return std::make_unique<Wav>();
}

void AudioRecorder::getInfo() const
{
}
