#include "TreeSprite.h"

int main()
{
    TreeSprite treeSprite;

    int numOfSpritesToCreate = 100;
    while (numOfSpritesToCreate--)
    {
        treeSprite.addTreeSprite();
    }

    treeSprite.draw();
}