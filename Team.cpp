#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int problems;
    cin >> problems;

    int answers[problems][3];

    int totalAnswers = 0;
    int localSum = 0;

    for (int i = 0; i < problems; i++)
    {
        int agreements;

        cin >> answers[i][0];
        cin >> answers[i][1];
        cin >> answers[i][2];

        localSum = answers[i][0] + answers[i][1] + answers[i][2];

        if(localSum>=2) totalAnswers++;
    }

    cout << totalAnswers;
    return 0;
}