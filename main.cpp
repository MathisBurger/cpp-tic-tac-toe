#include "Game/Game.h"

/**
 * Main entrypoint
 *
 * @return
 */
int main()
{
    Game game = Game();
    game.startGame();
    while (!game.checkGameOver()) {
        game.nextStep();
    }
    return 0;
}
