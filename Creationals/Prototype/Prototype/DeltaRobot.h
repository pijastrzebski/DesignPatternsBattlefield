#pragma once
#include "IRobot.h"
#include <string>

class DeltaRobot : public IRobot
{
public:
    DeltaRobot() noexcept;
    DeltaRobot(const std::string& color, const std::string& name, int weight) noexcept;
    DeltaRobot(const DeltaRobot& deltaRobot) noexcept;
    ~DeltaRobot();

    virtual std::unique_ptr<IRobot> clone() const override;
    virtual void getInfo() const override;

private:
    std::string m_color;
    std::string m_name;
    int m_weight;
};

