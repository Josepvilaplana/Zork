#pragma once

#include <iostream>
#include <vector>
#include "entity.h"
#include "room.h"
#include "exit.h"
#include "item.h"
#include "player.h"

using namespace std;

class World
{
public:
	World();
	~World();

private:
	Player* player;
	vector<Entity*> entities;
};