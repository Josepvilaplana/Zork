#pragma once

#include"player.h"
#include"creature.h"
#include"room.h"
#include<vector>

class Player : public Creature
{
public:
	Player(string name, string description, Room* location);
	~Player();

private:

};