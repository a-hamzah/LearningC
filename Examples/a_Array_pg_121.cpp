#include<bits/stdc++.h>
using namespace std;
int main()
{
    int myArray[5], i, max;
    for( i = 0; i <= 4; i++){
        cout << "Enter the value for myArray[" << i << "]: ";
        cin >> myArray[i];
        //cout << myArray[i];
    }

    max = myArray[0];

    for (i = 1; i <= 4; i++)
    {
        if(myArray[i] > max)
        max = myArray[i];
    }

    cout << "Maximum Element is = " << max << endl;
    









    return 0;
}