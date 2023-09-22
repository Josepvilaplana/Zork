#pragma once

#include"room.h"

enum Direction
{
	East,
	West,
	North,
	South
};

class Exit
{
public:
	Exit();
	~Exit();

private:
	Direction direction;
	Room* source;
	Room* destination;

};