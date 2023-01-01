#include "Game/Game.h"

int main()
{
    Game game = Game();
    game.startGame();
    while (!game.checkGameOver()) {
        game.nextStep();
    }
    return 0;
}
