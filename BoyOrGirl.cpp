#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string nick;
    cin >> nick;

    int lgh = nick.length();
    int distLgh = 0;

    bool duplicated;

    for (int i = 0; i < lgh; i++)
    {
        duplicated = false;

        for (int j = i + 1; j < lgh; j++)
        {
            if (nick[i] == nick[j]) duplicated = true;
        }

        if(!duplicated) distLgh++;
    }

    if (distLgh % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}