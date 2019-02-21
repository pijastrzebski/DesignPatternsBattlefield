#include "CompoundGraphic.h"

#include <iostream>

CompoundGraphic::CompoundGraphic()
{
}


CompoundGraphic::~CompoundGraphic()
{
}

void CompoundGraphic::draw() const
{
    std::cout << "Draw a CompoundGraphic:" << std::endl; //TODO: make it prettier 
    for (const auto& g : m_graphicMap)
    {
        g.second->draw();
    }
}

void CompoundGraphic::move() const
{
    std::cout << "Move a CompoundGraphic\n";
    for (const auto& g : m_graphicMap)
    {
        g.second->move();
    }
}

void CompoundGraphic::scale(int amount)
{
    constexpr auto DEFAULT_SCALE = 1;

    std::cout << "Scale a CompoundGraphic\n";
    for (const auto& g : m_graphicMap)
    {
        g.second->scale(DEFAULT_SCALE);
    }
}

void CompoundGraphic::add(std::string&& name, std::unique_ptr<IGraphic> graphic)
{
    m_graphicMap[std::move(name)] = std::move(graphic);
}

void CompoundGraphic::remove(std::string&& name)
{
    m_graphicMap.erase(std::move(name));
}
