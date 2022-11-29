#include<bits/stdc++.h>
using namespace std;
int main()
{
    int myArray[5], i;
    float quotient, sum = 0;
    for( i = 0; i <= 4; i++){
        cout << "Enter the value for myArray[" << i << "]: ";
        cin >> myArray[i];
        //cout << myArray[i];
    }

    for (i = 4; i >= 0; i--)
    {
        sum += myArray[i];
    }

    cout << "Sum = " << sum << endl;
    
    cout << "Average = " << sum / 5.0 << endl;
    





    return 0;
}