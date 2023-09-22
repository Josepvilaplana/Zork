#include"room.h"

Room::Room(string name, string description)
{
	this->name = name;
	this->description = description;
	this->type = ROOM;
}

Room::~Room()
{

}
