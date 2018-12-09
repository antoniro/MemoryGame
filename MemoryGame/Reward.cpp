#include "pch.h"
#include "Reward.h"


Reward::Reward(RubyAmount amount)
{
	_nRubies = amount;
}


Reward::operator int() const
{
	switch (_nRubies)
	{
	case RubyAmount::One: return 1;
		break;
	case RubyAmount::Two: return 2;
		break;
	case RubyAmount::Three: return 3;
		break;
	case RubyAmount::Four: return 4;
		break;
	default: return 0;
		break;
	}
}

std::ostream & operator<<(std::ostream & out, Reward const & reward)
{
	out << int(reward);
	return out;
}
