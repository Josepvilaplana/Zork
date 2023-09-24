#include<iostream>
#include<string>
#include<conio.h>
#include"world.h"
#include"utils.h"

using namespace std;

int main() 
{
	cout << "Welcome <TODO>" << endl;

    string command; //Player action
	vector<string> action{};

    char playerKeyInput;

	World gameWorld;
	
	while (true) 
	{
        ReadCommand(action);
		for (int i = 0; i < action.size(); i++)
		{
			cout << action[i] << endl;
		}
        ActionSystem(action);
	}

	return 0;
}



void ActionDetection()
{

}