#pragma once

struct IBuilder
{
    virtual void initScreen() const = 0;
    virtual void initWindow() const = 0;
    virtual void initRenderer() const = 0;
    virtual void initSpecialFeatures() const = 0;
    virtual void getResults() const = 0;

    virtual ~IBuilder() = default;
};
