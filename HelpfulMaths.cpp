#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string numbers;
    cin >> numbers;

    if (numbers.length() <= 1)
    {
        cout << numbers;
        return 0;
    }

    bool swaped = true;

    while (swaped)
    {
        swaped = false;

        for (int i = 0; i <= numbers.length() - 2; i = i + 2)
        {
            if(numbers[i] > numbers[i + 2]) 
            {
                char temp = numbers[i];
                numbers[i] = numbers[i + 2];
                numbers[i + 2] = temp;

                swaped = true;
            }
        }
    }

    cout << numbers;
}