#pragma once

#include "Card.h"
#include "Deck.h"


class CardDeck : public Deck<Card>
{
public:
	Card* getNext() override;
	static CardDeck & make_CardDeck();

private:
	CardDeck();
};

