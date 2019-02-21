#pragma once
#include "IGameWeapon.h"
class MagicNunchaku :
    public IGameWeapon
{
public:
    MagicNunchaku(IGameWeapon& weapon, int magicDamage = 1);
    ~MagicNunchaku();

    virtual void getInfo() const override;

private:
    IGameWeapon& m_weapon;

    int m_magicDamage;
};

