#pragma once

#include <vector>
#include <random>
#include <chrono>

template <typename C>
class Deck
{
public:
	void shuffle();
	virtual C* getNext() = 0;
	bool isEmpty() const;

private:
	friend class CardDeck;
	friend class RewardDeck;
	std::vector<C> _content;
	std::vector<C>::iterator _it = _content.begin();
};

