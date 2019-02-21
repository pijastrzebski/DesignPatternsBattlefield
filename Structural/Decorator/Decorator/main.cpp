#include "Nunchaku.h"
#include "MagicNunchaku.h"

int main()
{
    Nunchaku nunchaku;
    nunchaku.getInfo();

    MagicNunchaku magicNunchaku(nunchaku, 2);
    magicNunchaku.getInfo();

}