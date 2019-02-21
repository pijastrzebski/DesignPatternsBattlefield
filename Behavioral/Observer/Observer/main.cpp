#include "PlayerCharacter.h"
#include "TalentTree.h"

int main()
{
    PlayerCharacter playerCharacter;
    TalentTree talentTree;

    playerCharacter.addObserver(&talentTree);

    playerCharacter.earnExp(50);
    playerCharacter.earnExp(50);
    playerCharacter.earnExp(30);
    playerCharacter.earnExp(150);
    playerCharacter.earnExp(1000);

}