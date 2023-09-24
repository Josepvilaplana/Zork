#include<iostream>
#include<string>
#include<conio.h>
#include"world.h"

using namespace std;

vector<string> action;

void ReadCommand()
{
    char playerKeyInput;
    string temp;
    while (true)
    {
        playerKeyInput = _getch();
        cout << playerKeyInput;
        if (playerKeyInput == ' ')
        {
            action.push_back(temp);
            temp.clear();
        }
        else if (playerKeyInput == '\b')
        {
            cout << ' ' << '\b';
            temp.pop_back();
        }
        else if (playerKeyInput == '\r')
        {
            action.push_back(temp);
            cout << endl;
            return;
        }
        else {
            temp.push_back(playerKeyInput);
        }
    }
}

int main() 
{
	cout << "Welcome <TODO>" << endl;
    string command; //Player action
    char playerKeyInput;

	World gameWorld;
	
	while (true) 
	{
        ReadCommand();
	}

	return 0;
}



void ActionDetection()
{

}