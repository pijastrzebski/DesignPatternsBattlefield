#include "SfmlRenderingEngineBuilder.h"
#include <cstdio>
#include <typeinfo>

void SfmlRenderingEngineBuilder::initScreen() const
{
    std::puts("Sfml: Init Screen");
}

void SfmlRenderingEngineBuilder::initWindow() const
{
    std::puts("Sfml: Init Window");
}

void SfmlRenderingEngineBuilder::initRenderer() const
{
    std::puts("Sfml: Init Renderer");
}

void SfmlRenderingEngineBuilder::initSpecialFeatures() const
{
    std::puts("Sfml: Init Special Features");
}

void SfmlRenderingEngineBuilder::getResults() const
{
    std::puts("Used class name: ");
    std::puts(typeid(*this).name());
    std::puts("");
}
