#pragma once

#include "IBuilder.h"

class SdlRenderingEngineBuilder : public IBuilder
{
public:
    SdlRenderingEngineBuilder() = default;
    ~SdlRenderingEngineBuilder() = default;

    virtual void initScreen() const override;
    virtual void initWindow() const override;
    virtual void initSpecialFeatures() const override;    
    virtual void initRenderer() const override;
    virtual void getResults() const override;

};

