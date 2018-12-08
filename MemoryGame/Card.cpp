#include "pch.h"
#include "Card.h"

Card::Card(FaceAnimal animal, FaceBackground background)
{
	_animal = animal;
	_background = background;
	_animalChar = Card::getAnimalChar(_animal);
	_backgroundChar = Card::getBackgroundChar(_background);
}

char Card::getAnimalChar(FaceAnimal animal) const
{
	char animalChar;

	switch (animal)
	{
	case FaceAnimal::Crab: animalChar = 'C';
		break;
	case FaceAnimal::Penguin: animalChar = 'P';
		break;
	case FaceAnimal::Octopus: animalChar = 'O';
		break;
	case FaceAnimal::Turtle: animalChar = 'T';
		break;
	case FaceAnimal::Walrus: animalChar = 'W';
		break;
	}

	return animalChar;
}

char Card::getBackgroundChar(FaceBackground background) const
{
	char backgroundChar;

	switch (background)
	{
	case FaceBackground::Red: backgroundChar = 'r';
		break;
	case FaceBackground::Green: backgroundChar = 'g';
		break;
	case FaceBackground::Purple: backgroundChar = 'p';
		break;
	case FaceBackground::Blue: backgroundChar = 'b';
		break;
	case FaceBackground::Yellow: backgroundChar = 'y';
		break;
	}
	return 0;
}

int Card::getNRows() const
{
	return _nRows;
}

std::string Card::operator()(int row) const
{
	std::string rowString;

	if (row == 1) {
		rowString.push_back(_backgroundChar);
		rowString.push_back(_animalChar);
		rowString.push_back(_backgroundChar);
	}
	else
	{
		rowString.push_back(_backgroundChar);
		rowString.push_back(_backgroundChar);
		rowString.push_back(_backgroundChar);
	}

	return rowString;
}

Card::operator FaceAnimal() const
{
	return _animal;
}

Card::operator FaceBackground() const
{
	return _background;
}
