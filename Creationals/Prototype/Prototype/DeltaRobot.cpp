#include "DeltaRobot.h"
#include <iostream>
#include <typeinfo>

DeltaRobot::DeltaRobot() noexcept
{
    std::cout << "Delta Robot Default Constructor\n";
}


DeltaRobot::DeltaRobot(const DeltaRobot& deltaRobot) noexcept :
    m_color(deltaRobot.m_color),
    m_name(deltaRobot.m_name),
    m_weight(deltaRobot.m_weight)
{
    std::cout << "Delta Robot Copy Constructor\n";
}

DeltaRobot::DeltaRobot(const std::string& color, const std::string& name, int weight) noexcept :
    m_color(color),
    m_name(name),
    m_weight(weight)
{
}

DeltaRobot::~DeltaRobot()
{
}

std::unique_ptr<IRobot> DeltaRobot::clone() const
{
    std::cout << "Clone: " << typeid(this).name() << "\n\n";
    return std::make_unique<DeltaRobot>(*this);
}

void DeltaRobot::getInfo() const
{
    std::cout << "Delta Robot Specs:\n";
    std::cout << "Robot ID: " << reinterpret_cast<int>(this) << "\n";
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Color: " << m_color << "\n";
    std::cout << "Weight: " << m_weight << "\n";
    std::cout << "******************\n";
}
