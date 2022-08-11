#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int n;
    cin >> n;

    int w;
    cin >> w;

    int moneyNeeded = 0;

    for (int i = 1; i <= w; i++)
    {
        moneyNeeded = moneyNeeded + (i * k);
    }
    
    if(moneyNeeded <= n) 
    {
        cout << 0;
        return 0;
    }

    cout << moneyNeeded - n;
}