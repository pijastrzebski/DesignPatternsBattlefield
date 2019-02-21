#pragma once
#include "IBuilder.h"
class SfmlRenderingEngineBuilder :  public IBuilder
{
public:
    SfmlRenderingEngineBuilder() = default;
    ~SfmlRenderingEngineBuilder() = default;

    virtual void initScreen() const override;
    virtual void initWindow() const override;
    virtual void initRenderer() const override;
    virtual void initSpecialFeatures() const override;
    virtual void getResults() const override;

};

