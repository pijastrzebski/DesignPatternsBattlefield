#include "MagicNunchaku.h"

#include <iostream>

MagicNunchaku::MagicNunchaku(IGameWeapon& weapon, int magicDamage) :
    m_weapon(weapon),
    m_magicDamage(magicDamage)
{
}


MagicNunchaku::~MagicNunchaku()
{
}

void MagicNunchaku::getInfo() const
{
    std::cout << "Enchanted Weapon Parameters:\n";
    std::cout << "Name: " << "Magic Nunchaku\n";
    std::cout << "Durability: " << m_weapon.m_durability << "\n";
    std::cout << "Damage: " << m_weapon.m_damage << "\n";
    std::cout << "Weight: " << m_weapon.m_weight << "\n";
    std::cout << "Bonus: Magic Damage: " << m_magicDamage << "\n";
    std::cout << ">>" << std::endl;
}
