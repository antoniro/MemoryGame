#pragma once

#include <iostream>

enum class RubyAmount { One, Two, Three, Four };

class Reward
{
public:
	operator int() const;
	friend std::ostream & operator << (std::ostream & out, Reward const & reward);
	Reward(Reward const &) = delete;		// Prevent copies
	Reward & operator = (Reward const &) = delete;		// Prevent assignment

private:
	friend class RewardDeck;
	Reward(RubyAmount amount);
	RubyAmount _nRubies;
};

