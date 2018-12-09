#include <iostream>
#include "Board.h"

bool Board::isFaceUp(const char &letter, const int &number){
    int row = letterToInt(letter);
    int col = number;
    if(card2D[row][col]->getFaceUp()){
        return true;
    }
    return false;
}

bool Board::turnFaceUp(const char &letter, const int &number){
    int row = letterToInt(letter);
    int col = number;
    if(card2D[row][col]->getFaceUp()){
        return false;
    }
    card2D[letter][number]->setFaceUp(true);
}

bool Board::turnFaceDown(const char &letter, const int &number){
    int row = letterToInt(letter);
    int col = number;
    if(!card2D[row][col]->getFaceUp()){
        return false;
    }
    card2D[row][col]->setFaceUp(false);
}

Card* Board::getCard(const char &letter, const int &number){
    int row = letterToInt(letter);
    int col = number;
    return card2D[row][col];
}

void Board::setCard(const char &letter, const int &number, Card* card){
    int row = letterToInt(letter);
    int col = number;
    card2D[row][col] = card;
}
                    
void reset(){
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++){
            card2D[row][col]->setFaceUp(false);
        }
    }
}
                           
ostream& operator<<(ostream& out, Board& board);

int Board::letterToInt(const char &letter){
    if(*letter == "A")
        return 1;
    if(*letter == "B")
        return 2;
    if(*letter == "C")
        return 3;
    if(*letter == "D")
        return 4;
    if(*letter == "E")
        return 5;
}

