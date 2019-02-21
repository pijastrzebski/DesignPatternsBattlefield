#pragma once

#include <string>

struct IGameWeapon
{
    ~IGameWeapon() = default;
    IGameWeapon(int durability = 0, int damage = 0, int weight = 0, std::string name = "Weapon") :
        m_durability(durability),
        m_damage(damage),
        m_weight(weight),
        m_name(name)
    {}

    virtual void getInfo() const = 0;

    int m_durability;
    int m_damage;
    int m_weight;

    std::string m_name;
};
