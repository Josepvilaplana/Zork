#pragma once

#include<iostream>
#include<string>
#include<list>

using namespace std;

enum EntityType
{
	NO_TYPE,
	CREATURE,
	EXIT,
	ROOM,
	ITEM,
	ENEMY,
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

	void Look();

private:

};