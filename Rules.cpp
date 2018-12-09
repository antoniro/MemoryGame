#include <stdio.h>
#include "Rules.h"

bool isValid(const Game& game){
    if(game.getPreviousCard() == game.getCurrentCard()){
        return true;
    }
    else{
        return false;
    }
}
bool gameOver(const Game& game){
    if(game.getRound() == 7){
        return true;
    }
    else{
        return false;
    }
}
bool roundOver(const Game& game){
    if(game.activePlayers() == 1){
        return true;
    }
    else{
        return false;
    }
    
}
const Player& getNextPlayer(const Game& game){
    
    
}
