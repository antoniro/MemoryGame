#pragma once

#include "Card.h"
#include "Deck.h"


class CardDeck : public Deck<Card>
{
public:
	Card* getNext() override;
	static CardDeck & make_CardDeck();
	CardDeck(CardDeck const &) = delete;		// Prevent copies
	CardDeck & operator = (CardDeck const &) = delete;		// Prevent assignment

private:
	CardDeck();
};

