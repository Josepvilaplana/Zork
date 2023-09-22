#pragma once

#include"entity.h"
#include"room.h"

class Item : public Entity
{
public:
	Item(string name, string description, Entity* place, bool pickable);
	~Item();

private:
	Entity* place;
	bool pickable;
};