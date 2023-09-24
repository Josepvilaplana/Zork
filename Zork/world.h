#pragma once

#include <iostream>
#include <vector>
#include "entity.h"
#include "room.h"
#include "exit.h"
#include "item.h"
#include "player.h"
#include "utils.h"

using namespace std;

class World
{
public:
	World();
	~World();
	void ActionSystem(vector<string>& action);
private:
	vector<Entity*> entities;
};