#pragma once

#include "IBuilder.h"
#include <memory>

class Director
{
public:
    Director() = default;
    ~Director() = default;

    void setBuilder(IBuilder* builder);
    void makeRenderingEngine(IBuilder* builder);

private:
    std::unique_ptr<IBuilder> m_builder;
};

