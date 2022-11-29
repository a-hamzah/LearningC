#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sumOdd = 0;
    for (int i = 1; i < 10; i+=2)
    {
        cout << i << endl;
        sumOdd += i;
    }
    cout << "Sum = " << sumOdd << endl;

    return 0;
}