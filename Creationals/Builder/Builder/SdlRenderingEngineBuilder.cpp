#include "SdlRenderingEngineBuilder.h"
#include <cstdio>
#include <typeinfo>

void SdlRenderingEngineBuilder::initScreen() const
{
    std::puts("SDL: Init Screen");
}

void SdlRenderingEngineBuilder::initWindow() const
{
    std::puts("SDL: Init Window");
}

void SdlRenderingEngineBuilder::initRenderer() const
{
    std::puts("SDL: Init Renderer");
}

void SdlRenderingEngineBuilder::getResults() const
{
    std::puts("Used class name: ");
    std::puts(typeid(*this).name());
    std::puts("");
}

void SdlRenderingEngineBuilder::initSpecialFeatures() const
{
    std::puts("SDL: Init Special Features");
}
