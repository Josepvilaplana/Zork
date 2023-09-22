#pragma once

#include"room.h"
#include"entity.h"

enum Direction
{
	East,
	North,
	West,
	South
};

class Exit : public Entity
{
public:
	Exit(Direction direction, Room* source, Room* destination);
	~Exit();

private:
	Direction direction;
	Room* source;
	Room* destination;

	Direction InvertedDirection(Direction direction);
};