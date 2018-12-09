#include <iostream>
#include "Game.h"

class Rules{
private:
    
public:
    bool isValid(const Game& game);
    bool gameOver(const Game& game);
    bool roundOver(const Game& game);
    const Player& getNextPlayer(const Game& game);
}
