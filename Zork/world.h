#pragma once

#include <vector>
#include "entity.h"

using namespace std;

class World
{
public:
	World();
	~World();

private:
	vector<Entity*> entities;
};