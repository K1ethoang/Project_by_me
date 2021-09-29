#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

void player(string &player_select)
{
    cout << "Select Bua, Keo, Bao (no capslock): ";
    getline(cin, player_select);
    fflush(stdin);
}

void bot(int random, string &bot_select)
{
    srand(time(NULL));
    random = rand() % 3 + 1;
    if (random == 1)
    {
        bot_select = "bua";
    }
    else if (random == 2)
    {
        bot_select = "keo";
    }
    else if (random == 3)
    {
        bot_select = "bao";
    }
}

int main()
{
playeragain:
    // bot
    int random;
    string bot_select;
    bot(random, bot_select);
    // player
    string player_select;
    player(player_select);
    cout << "-----------------------------------------" << endl;
    cout << "Bot select: " << bot_select << endl;
    cout << "Player select: " << player_select << endl;
    cout << "-----------------------------------------" << endl;

    // referee
    if (player_select == bot_select)
    {
        cout << "Draw" << endl;
    }
    else if (player_select == "bua")
    {
        if (bot_select == "keo")
        {
            cout << "Win" << endl;
        }
        else
        {
            cout << "Lose" << endl;
        }
    }
    else if (player_select == "keo")
    {
        if (bot_select == "bao")
        {
            cout << "Win" << endl;
        }
        else
        {
            cout << "Lose" << endl;
        }
    }
    else if (player_select == "bao")
    {
        if (bot_select == "bua")
        {
            cout << "Win" << endl;
        }
        else
        {
            cout << "Lose" << endl;
        }
    }
    else
    {
        cout << "Wrong input!" << endl;
    }

    cout << "Play again ? (y/n): ";
    string choose;
    getline(cin, choose);
    cout << "\n-----------------------------------------" << endl;
    if (choose == "y")
    {
        goto playeragain;
    }

    cout << "<----------> Made By HGK (K1ethoang) <---------->" << endl;

    system("pause");
    return 0;
}