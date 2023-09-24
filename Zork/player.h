#pragma once

#include"player.h"
#include"creature.h"

enum PlayerActions
{
	LOOK
};

class Player : public Creature
{
public:
	Player(string name, string description);
	~Player();

private:
	bool alive;
};