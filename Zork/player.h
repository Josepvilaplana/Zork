#pragma once

#include"player.h"
#include"creature.h"

class Player : public Creature
{
public:
	Player(string name, string description);
	~Player();

private:
	bool alive;
};