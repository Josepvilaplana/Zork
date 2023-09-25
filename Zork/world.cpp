#include"world.h"

World::World()
{
	//WORLD DEFINITION
	//Creates world rooms
	Room* room1 = new Room("forest", "Room 1 description TODO");
	Room* room2 = new Room("lake", "Room 2 description TODO");
	Room* room3 = new Room("volcano", "Room 3 description TODO");
	Room* room4 = new Room("bossRoom", "Room 4 description TODO");
	Room* room5 = new Room("mine", "Room 5 description TODO");

	//Creates the available exits of the rooms
	Exit* exit1 = new Exit(East, room1, room2);
	Exit* exit2 = new Exit(South, room2, room3);
	Exit* exit3 = new Exit(East, room2, room4);
	Exit* exit4 = new Exit(North, room4, room5);

	//Creates the main character
	Player* player = new Player("player", "Player description TODO", room1);

	//Creates the items available at the rooms
	Item* item1 = new Item("sword", "Item1 description TODO", room2, true);
	Item* item2 = new Item("chest", "Item2 description TODO", room3, false);
	Item* item3 = new Item("gold", "Item3 description TODO", item2, true);
	Item* item4 = new Item("shield", "Item4 description TODO", room5, true);

	item1->PickUp();

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
			if (EntityExists("player", entities))
			{
				Player* temp = (Player*)entities[FindEntity("player", entities)];
				temp->location->Look();
			}
        }
		break;
	case 2:
		if (action[0] == "look")
		{
			if (EntityExists(action[1], entities) == EntityType::ITEM)
			{
				Item* temp = (Item*)entities[FindEntity(action[1], entities)];
				if (temp->IsInInventory()) temp->Look();
			}
		}
		break;
    }
    action.clear();
}
