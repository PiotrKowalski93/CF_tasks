#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int lines;
    cin >> lines;

    char words[lines][200];

    for (int i = 0; i < lines; i++)
    {
        cin >> words[i];
    }

    int len;

    for (int i = 0; i < lines; i++)
    {
        len = strlen(words[i]);
        if (len <= 10)
        {
            for (int j = 0; j < len; j++)
            {
                cout << words[i][j];
            }
        }else
        {
            cout << words[i][0] << len - 2 << words[i][len - 1];
        }

        cout << "\n";
    }

    return 0;
}