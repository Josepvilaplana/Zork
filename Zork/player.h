#pragma once

#include"player.h"
#include"creature.h"
#include<vector>

class Player : public Creature
{
public:
	Player(string name, string description);
	~Player();

private:
	bool alive;
	RoomName currentRoom;
};