#include <iostream>
#include "Game.h"

Game::Game(Players players[], Board board){
    round = 0;
    previousCard = nullptr;
    currentCard = nullptr;
    this->players = players;
    for(int i = 0; i < sizeof(players)/sizeof(*players); i++){
        if (i==0){
            players[i].setSide("top");
        }
        if (i==1){
            players[i].setSide("right");
        }
        if (i==2){
            players[i].setSide("bottom");
        }
        if (i==3){
            players[i].setSide("left");
        }
    }
    this->board = board;
}
int Game:: getRound(){
    return round;
}
void Game::nextRound(){
    round++;
}
void Game::addPlayer(const Player &player){
    for(int i = 0; i < sizeof(players)/sizeof(*players); i++){
        if(player.getName() == players[i].getName())
            return;
    }
    if(sizeof(players)/sizeof(*players) == 2){
        Players* temp = new Players[3];
        std::copy(players, players + 2, temp);
        delete[]players;
        players = temp;
    }
    if(sizeof(players)/sizeof(*players) == 3){
        Players* temp = new Players[4];
        std::copy(players, players + 3, temp);
        delete[]players;
        players = temp;
    }
}
Player& Game::getPlayer(String side){
    if(side=="top"){
        return player[0]
    }
    if(side=="right"){
        return player[1]
    }
    if(side=="bottom"){
        return player[2]
    }
    if(side=="left"){
        return player[3]
    }

}
const Card* Game::getPreviousCard(){
    return previousCard;
}
const Card* Game::getCurrentCard(){
    return currentCard;
}
void Game::setCurrentCard(const Card* card){
    currentCard = &card;
}
Card* Game::getCard(const char &letter, const int &number){
    board.getCard(letter, number);
}
void Game::setCard(const char &letter, const int &number, Card* card){
    board.setCard(letter, number, card);
}
int activePlayers(){
    temp = 0;
    for(int i = 0; i < sizeof(players)/sizeof(*players); i++){
        if(player[i].isActive()){
            temp++;
        }
    }
    return temp;
}
