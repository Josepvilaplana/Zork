#pragma once

#include"entity.h"
#include"room.h"

class Item : public Entity
{
public:
	Item(string name, string description, Entity* place, bool pickable);
	~Item();

	bool IsInInventory();
	void PickUp();

private:
	Entity* place;
	bool pickable;
	bool inInventory;
};