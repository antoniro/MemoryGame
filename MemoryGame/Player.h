#pragma once

#include <string>
#include <iostream>

#include "Reward.h"

enum class Side { Top, Bottom, Left, Right };

class Player
{
public:
	Player();
	~Player();
	std::string getName() const;
	void setActive(bool);
	bool isActive() const;
	int getNRubies() const;
	void addReward(Reward const &);
	void setDisplayMode(bool endOfGame);
	Side getSide() const;
	void setSide(Side);
	friend std::ostream & operator << (std::ostream &, Player const &);

private:
	std::string _name;
	Side _side;
	int _nRubies;
	bool _isActive;

};
