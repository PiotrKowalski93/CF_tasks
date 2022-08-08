#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int side[2];

    cin >> side[0];
    cin >> side[1];
   
    int field = side[0]*side[1];

    cout << field/2;
    
    return 0;
}