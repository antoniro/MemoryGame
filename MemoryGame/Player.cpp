#include "pch.h"
#include "Player.h"


Player::Player(std::string name)
{
	_name = name;
	_isActive = false;
	_nRubies = 0;
}

Player::Player(std::string name, Side side)
{
	_name = name;
	_side = side;
	_isActive = false;
	_nRubies = 0;
}


Player::~Player()
{
}

std::string Player::getName() const
{
	return _name;
}

void Player::setActive(bool value)
{
	_isActive = value;
}

bool Player::isActive() const
{
	return _isActive;
}

int Player::getNRubies() const
{
	return _nRubies;
}

void Player::addReward(Reward const & reward)
{
	_nRubies += int(reward);
}

void Player::setDisplayMode(bool endOfGame)
{
	_endOfGameDisplay = endOfGame;
}

Side Player::getSide() const
{
	return _side;
}

void Player::setSide(Side side)
{
	_side = side;
}

std::string Player::sideToString(Side side)
{
	switch (side)
	{
	case Side::Top: return "Top";
		break;
	case Side::Bottom: return "Bottom";
		break;
	case Side::Left: return "Left";
		break;
	case Side::Right: return "Right";
		break;
	};
}

std::ostream & operator<<(std::ostream & out, Player const & player)
{
	if (!player._endOfGameDisplay)
	{
		out << player.getName << ": " << Player::sideToString(player.getSide) 
			<< "(" << (player.isActive ? "active" : "inactive") << ")\n";
	}
	else {
		out << player.getName << ": " << player.getNRubies << "rubies\n";
	}
	return out;
}
