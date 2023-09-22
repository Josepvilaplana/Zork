#pragma once

#include"room.h"
#include"entity.h"

enum Direction
{
	East,
	West,
	North,
	South
};

class Exit : public Entity
{
public:
	Exit();
	~Exit();

private:
	Direction direction;
	Room* source;
	Room* destination;

};