#include "AudioRecorder.h"
#include "SuperFancyPlayer.h"
#include "Converter.h"


int main()
{
    AudioRecorder recorder;
    std::unique_ptr<Wav> recordedSample = recorder.record();

    Converter converter;

    SuperFancyPlayer player;
    player.play(converter.convertWavToMp3(std::move(recordedSample)));
}