#include"player.h"
#include"room.h"

Player::Player(string name, string description)
{
	this->name = name;
	this->description = description;
	this->alive = true;
	currentRoom = RoomName::FOREST;
}

Player::~Player()
{

}

