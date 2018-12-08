#pragma once

#include <vector>

template <typename C>
class Deck
{
public:
	Deck();
	~Deck();
	virtual void shuffle()=0;
	C* getNext() const;
	bool isEmpty() const;

private:
	std::vector<C> _content;
};

