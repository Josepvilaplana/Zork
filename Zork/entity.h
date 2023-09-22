#pragma once

#include<string>
#include<list>

using namespace std;

enum EntityType
{
	CREATURE,
	EXIT,
	ROOM,
	ITEM,
	NPC,
	PLAYER
};

class Entity
{
public:
	Entity();
	~Entity();
	EntityType type;
	string name;
	string description;
	list<Entity*> contains;

	virtual void Update();

private:

};