#include"world.h"

World::World()
{
	//WORLD DEFINITION
	//Creates world rooms
	Room* room1 = new Room("Forest", "Room 1 description TODO");
	Room* room2 = new Room("Lake", "Room 2 description TODO");
	Room* room3 = new Room("Volcano", "Room 3 description TODO");
	Room* room4 = new Room("BossRoom", "Room 4 description TODO");
	Room* room5 = new Room("Mine", "Room 5 description TODO");

	//Creates the available exits of the rooms
	Exit* exit1 = new Exit(East, room1, room2);
	Exit* exit2 = new Exit(South, room2, room3);
	Exit* exit3 = new Exit(East, room2, room4);
	Exit* exit4 = new Exit(North, room4, room5);

	//Creates the main character
	Player* player = new Player("Player", "Player description TODO");

	//Creates the items available at the rooms
	Item* item1 = new Item("Sword", "Item1 description TODO", room2, true);
	Item* item2 = new Item("Chest", "Item2 description TODO", room3, false);
	Item* item3 = new Item("Gold", "Item3 description TODO", item2, true);
	Item* item4 = new Item("Shield", "Item4 description TODO", room5, true);

	entities.push_back(room1);
	entities.push_back(room2);
	entities.push_back(room3);
	entities.push_back(room4);
	entities.push_back(room5);
	entities.push_back(exit1);
	entities.push_back(exit2);
	entities.push_back(exit3);
	entities.push_back(exit4);
	entities.push_back(player);
	entities.push_back(item1);
	entities.push_back(item2);
	entities.push_back(item3);
	entities.push_back(item4);
}

World::~World()
{
	for (vector<Entity*>::iterator it = entities.begin(); it != entities.end(); ++it)
		delete* it;

	entities.clear();
}

void World::ActionSystem(vector<string>& action)
{
    switch (action.size())
    {
    case 0:
        cout << "TODO avisar escriure un commando" << endl;
        break;
    case 1:
        if (action[0] == "look")
        {
			if (EntityExists("Player", entities))
			{
				entities[FindEntity("Player", entities)]->Look();
			}
        }
		break;
    }
    action.clear();
}
