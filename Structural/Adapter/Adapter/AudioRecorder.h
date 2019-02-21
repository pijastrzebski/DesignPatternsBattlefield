#pragma once

#include "IRecorder.h"
#include "Wav.h"


class AudioRecorder : public IRecorder
{
public:
    AudioRecorder()  = default;
    ~AudioRecorder() = default;

    virtual std::unique_ptr<Wav> record() const override;
    virtual void getInfo() const override;

};

