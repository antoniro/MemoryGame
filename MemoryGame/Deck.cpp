#include "pch.h"
#include "Deck.h"



template<typename C>
void Deck<C>::shuffle()
{
	unsigned seed = std::chrono::system_clock::now()
		.time_since_epoch()
		.count();

	std::shuffle(_content.begin(), _content.end(), std::default_random_engine(seed));
}

template<typename C>
bool Deck<C>::isEmpty() const
{
	return _content.empty();
}
