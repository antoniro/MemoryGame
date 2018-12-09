#include <iostream>
#include "Player.h"

using namespace std;

class Game{
private:
    int round;
    Player players[];
    Card previousCard;
    Card currentCard;
    Board board;
    
public:
    Game(int players);
    int getRound();
    void nextRound();
    void addPlayer();
    Player& getPlayer(Side);
    const Card* getPreviousCard();
    const Card* getCurrentCard();
    void setCurrentCard(const Card* card);
    Card* getCard(const char &letter, const int &number);
    void setCard(const char &letter, const int &number, Card* card);
    int activePlayers();
};
