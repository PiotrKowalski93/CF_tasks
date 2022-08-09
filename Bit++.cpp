#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string operation;
    int x = 0;
    int n;

    cin >> n;

    for (int i = 0; i <n; i++)
    {
        cin >> operation;

        if(operation[0] == '+' || operation[2] == '+') {
            x++;
        }
        else
        {
            x--;
        }
    }
    
    cout << x;
    return 0;
}