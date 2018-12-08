#pragma once

#include "Card.h"
#include "Deck.h"


class CardDeck : public Deck<Card>
{
public:
	CardDeck();
	~CardDeck();
	void shuffle();
};

