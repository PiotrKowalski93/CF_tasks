#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int lgh;
    cin >> lgh;

    char stones[lgh];
    cin >> stones;

    int pairs = 0;

    for (int i = 0; i < lgh - 1; i++)
    {
        if (stones[i] == stones[i + 1])
        {
            pairs++;
        }
    }

    cout << pairs;
}