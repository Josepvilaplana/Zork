#pragma once

#include"room.h"
#include"entity.h"

class Creature : public Entity
{
public:
	Creature();
	~Creature();

	Room* location;

private:

};