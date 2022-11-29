#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, i= 0, remainder, array[10];
    cout << "Enter Number = "; cin >> a;

    do
    {
        
        remainder = a % 8;
        //cout << remainder;
        array[i] = remainder;
        //cout << i;
        i++;

        a = a / 8;
    } while (a > 0);
    
    for(i=i-1; i >= 0; i--){ //i = i-1 is the size of the array
        cout << array[i];
    }
    // while(i >= 0){
    //     cout << array[i];
    //     i--;
    // }

    cout << endl;
    return 0;
}