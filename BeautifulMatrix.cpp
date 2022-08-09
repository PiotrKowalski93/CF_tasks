#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int matrix[5][5];
    int x,y;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];

            if(matrix[i][j] == 1) {
                x = i + 1; 
                y = j + 1;
            }
        }
    }
    
    int a = 0, b = 0;

    if(x <= 3) a = 3 - x;
        else a = x - 3;

    if(y <= 3) b = 3 - y;
        else b = y - 3;


    cout << b + a;
    return 0;
}