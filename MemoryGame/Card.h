#pragma once

#include <string>
#include <iostream>

enum class FaceAnimal { Crab, Penguin, Octopus, Turtle, Walrus };
enum class FaceBackground { Red, Green, Purple, Blue, Yellow };

class Card
{
public:
	int getNRows() const;
	std::string operator () (int row) const;
	operator FaceAnimal() const;
	operator FaceBackground() const;
	Card(Card const &) = delete;		// Prevent copies
	Card & operator = (Card const &) = delete;		// Prevent assignment

private:
	friend class CardDeck;
	Card(FaceAnimal animal, FaceBackground background);
	char getAnimalChar(FaceAnimal animal) const;
	char getBackgroundChar(FaceBackground background) const;
	FaceAnimal _animal;
	FaceBackground _background;
	char _animalChar;
	char _backgroundChar;
	int const _nRows = 3;
};
