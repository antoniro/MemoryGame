#pragma once

#include <string>
#include <iostream>

enum class FaceAnimal { Crab, Penguin, Octopus, Turtle, Walrus };
enum class FaceBackground { Red, Green, Purple, Blue, Yellow };

class Card
{
public:
	Card();
	~Card();
	int getNRows();
	std::string operator () (int row);
	operator FaceAnimal();
	operator FaceAnimal();

private:
	Card(FaceAnimal animal, FaceBackground background);
	FaceAnimal _animal;
	FaceBackground _background;
};
