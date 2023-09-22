#include"exit.h"

Exit::Exit(Direction direction, Room* source, Room* destination)
{
	this->direction = direction;
	this->source = source;
	this->destination = destination;
	this->type = EXIT;
}

Exit::~Exit()
{

}

Direction Exit::InvertedDirection(Direction direction)
{
	return Direction((direction + 2) % 4);
}