#pragma once

#include<conio.h>

inline void ReadCommand(vector<string>& action)
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

inline bool EntityExists(string name, vector<Entity*>& entities)
{
    for (int i = 0; i < entities.size();i++)
    {
        if (entities[i]->name == name)
        {
            return true;
        }
    }
    return false;
}

inline int FindEntity(string name, vector<Entity*>& entities)
{
    for (int i = 0; i < entities.size();i++)
    {
        if (entities[i]->name == name)
        {
            return i;
        }
    }
}