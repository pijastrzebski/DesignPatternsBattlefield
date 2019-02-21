#include <iostream>

#include "Player.h"
#include "PlayState.h"
#include "PauseState.h"

int main()
{
    Player player;
    auto playState = std::make_unique<PlayState>(player);
    auto pauseState = std::make_unique<PauseState>(player);

    player.changeState(std::move(playState));
    player.clickPlay();
    player.clickPause();

    player.changeState(std::move(pauseState));
    player.clickPlay();
    player.clickPause();
}