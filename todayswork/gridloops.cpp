#include <iostream>

using namespace std;

int main()
{
    // 2d array
    int numGrid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    // cout << numGrid[2][2] << endl;

    //------------------------using nested for loop to print all elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numGrid[i][j];
        }
        cout << endl;
    }

    //------------------------changing the values

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printing the current value
            cout << "Current Values of [" << i << "][" << j << "] = " << numGrid[i][j] << endl;

            // giving the new value
            cout << "Enter the new values for [" << i << "][" << j << "] = ";
            cin >> numGrid[i][j];
        }

        cout << endl;
    }

    //------------------------printing the grid again according to the new values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}