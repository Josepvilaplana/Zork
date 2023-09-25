#pragma once

#include"creature.h"
#include"entity.h"
#include"room.h"

class NPC : public Creature
{
public:
	NPC(string name, string description, Room* startingRoom);
	~NPC();

private:

};