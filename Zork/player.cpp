#include"player.h"
#include"room.h"

Player::Player(string name, string description, Room* startingRoom)
{
	type = PLAYER;
	this->name = name;
	this->description = description;
	alive = true;
	location = startingRoom;
}

Player::~Player()
{

}