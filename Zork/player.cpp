#include"player.h"

Player::Player(string name, string description)
{
	this->name = name;
	this->description = description;
	this->alive = true;
}

Player::~Player()
{

}