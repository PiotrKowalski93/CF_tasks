#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string word;
    cin >> word;

    if(word[0] >= 65 && word[0] <= 90)
    {
        cout << word;
    }
    else
    {
        word[0] = word[0] - 32; 
        cout << word;
    }
}