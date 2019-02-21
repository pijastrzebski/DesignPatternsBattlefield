#pragma once
#include "IGameWeapon.h"
class Nunchaku :
    public IGameWeapon
{
public:
    Nunchaku();
    ~Nunchaku();

    virtual void getInfo() const override;

};

