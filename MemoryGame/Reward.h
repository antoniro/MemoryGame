#pragma once
class Reward
{
public:
	Reward();
	~Reward();
	operator int() const;

private:
	int _nRubies;
};

