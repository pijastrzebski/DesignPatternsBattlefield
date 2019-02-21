#include "Nunchaku.h"

#include <iostream>

Nunchaku::Nunchaku() :
    IGameWeapon(100, 10, 1, "Nunchaku")
{
}


Nunchaku::~Nunchaku()
{
}

void Nunchaku::getInfo() const
{
    std::cout << "Weapon Parameters:\n";
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Durability: " << m_durability << "\n";
    std::cout << "Damage: " << m_damage << "\n";
    std::cout << "Weight: " << m_weight << "\n";
    std::cout << ">>" << std::endl;
}
