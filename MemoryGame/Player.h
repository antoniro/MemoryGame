#pragma once

#include <string>
#include <iostream>

#include "Reward.h"

enum class Side { Top, Bottom, Left, Right };

class Player
{
public:
	Player(std::string name);
	Player(std::string name, Side side);
	~Player();
	std::string getName() const;
	void setActive(bool value);
	bool isActive() const;
	int getNRubies() const;
	void addReward(Reward const & reward);
	void setDisplayMode(bool endOfGame);
	Side getSide() const;
	void setSide(Side side);
	friend std::ostream & operator << (std::ostream & out, Player const & player);

private:
	std::string _name;
	Side _side;
	int _nRubies;
	bool _isActive;
	bool _endOfGameDisplay;
	static std::string sideToString(Side side);
};
