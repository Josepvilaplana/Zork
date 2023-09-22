#include"world.h"

World::World()
{
	//WORLD DEFINITION
	//Creates world rooms
	Room* room1 = new Room("Room1", "Room 1 description TODO");
	Room* room2 = new Room("Room2", "Room 2 description TODO");
	Room* room3 = new Room("Room3", "Room 3 description TODO");
	Room* room4 = new Room("Room4", "Room 4 description TODO");
	Room* room5 = new Room("Room5", "Room 5 description TODO");

	//Creates the available exits of the rooms
	Exit* exit1 = new Exit(East, room1, room2);
	Exit* exit2 = new Exit(South, room2, room3);
	Exit* exit3 = new Exit(East, room2, room4);
	Exit* exit4 = new Exit(North, room4, room5);

	//Creates the main character
	player = new Player("Josep", "Player description TODO");

	//Creates the items available at the rooms
	Item* item1 = new Item("Sword", "Item1 description TODO", room2, true);
	Item* item2 = new Item("Chest", "Item2 description TODO", room3, false);
	Item* item3 = new Item("Gold", "Item3 description TODO", item2, true);
	Item* item4 = new Item("Shield", "Item4 description TODO", room5, true);
}

World::~World()
{
	for (vector<Entity*>::iterator it = entities.begin(); it != entities.end(); ++it)
		delete* it;

	entities.clear();
}