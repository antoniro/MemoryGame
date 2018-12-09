#include "pch.h"
#include "CardDeck.h"


Card * CardDeck::getNext()
{
	if (!isEmpty() && _it != _content.end()) {
		return &(*_it++);
	}
	else
	{
		return nullptr;
	}
}

CardDeck & CardDeck::make_CardDeck()
{
	static CardDeck cardDeck;
	return cardDeck;
}

CardDeck::CardDeck()
{
	std::vector<FaceAnimal> const animals { FaceAnimal::Crab, FaceAnimal::Octopus, FaceAnimal::Penguin,
		FaceAnimal::Turtle, FaceAnimal::Walrus };

	std::vector<FaceBackground> const backgrounds{ FaceBackground::Blue, FaceBackground::Green,
		FaceBackground::Purple, FaceBackground::Red, FaceBackground::Yellow };

	for (auto const & animal : animals) {
		for (auto const & background : backgrounds) {
			_content.push_back(Card(animal, background));
		}
	}


}
