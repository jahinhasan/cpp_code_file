#include <iostream>
using namespace std;

int main()
{
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}};

    int hits = 0;
    int numberofturns = 0;

    while (hits < 4)
    {
        int row, colum;

        cout << "select coordinates:\n ";

        cout << "select row between 0 to 3: ";
        cin >> row;

        cout << "select colum between 0 to 3: ";
        cin >> colum;
        if (ships[row][colum] == 1)
        {
            ships[row][colum] = 0;
            hits++;

            cout << "HITTS!" << (4 - hits) << "left.\n\n";
        }
        else
        {
            cout << "MISS.\n\n";
        }

        numberofturns++;
    }
    cout << "Victory!\n";
    cout << "you won in " << numberofturns << "turns.";

    return 0;
}
