#include"npc.h"

NPC::NPC(string name, string description, Room* startingRoom)
{
	type = ENEMY;
	alive = true;
}

NPC::~NPC()
{

}
