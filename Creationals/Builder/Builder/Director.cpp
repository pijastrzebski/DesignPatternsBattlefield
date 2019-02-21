#include "Director.h"


void Director::setBuilder(IBuilder* builder)
{
    m_builder.reset(std::move(builder));
}

void Director::makeRenderingEngine(IBuilder* builder)
{
    setBuilder(builder);

    m_builder->initScreen();
    m_builder->initWindow();
    m_builder->initRenderer();
    m_builder->initSpecialFeatures();
    m_builder->getResults();
}
