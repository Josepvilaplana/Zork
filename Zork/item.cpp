#include"item.h"

Item::Item(string name, string description, Entity* place, bool pickable)
{
	this->name = name;
	this->description = description;
	this->place = place;
	this->pickable = pickable;
	this->type = ITEM;
}

Item::~Item()
{

}
