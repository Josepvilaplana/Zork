#pragma once

#include"entity.h"
#include"item.h"
#include<list>

class Item;

class Room : public Entity
{
public:
	Room(string name, string description);
	~Room();

private:
	list<Item*> items;
};