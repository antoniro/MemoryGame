#include <iostream>

using namespace std;

class Board{
    
private:
    Card** card2D;

public:
    bool isFaceUp(const char &letter, const int &number);
    bool turnFaceUp(const char &letter, const int &number);
    bool turnFaceDown(const char &letter, const int &number);
    Card* getCard(const char &letter, const int &number);
    void setCard(const char &letter, const int &number, Card* card);
    void reset();
    ostream& operator<<(ostream& out, Board& board);
    int letterToInt(const char &letter);
};

