#pragma once

void ReadCommand(vector<string>& action)
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

void ActionSystem(vector<string>& action)
{
    action.clear();
}