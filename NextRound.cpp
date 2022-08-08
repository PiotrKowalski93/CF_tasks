#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int participants;
    int finisher;

    cin >> participants;
    cin >> finisher;
   
    int scores[participants];

    for (int i = 0; i <participants; i++)
    {
        cin >> scores[i];
    }
    
    int part = 0;

    for (int i = 0; i <participants; i++)
    {
        if(scores[i] >= scores[finisher - 1]) 
        {
            if(scores[i] > 0 )part++;
            continue;
        }
        
        break;
    }
   
    cout << part;

    return 0;
}