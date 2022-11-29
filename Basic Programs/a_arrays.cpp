#include<bits/stdc++.h>
using namespace std;
int main()
{
    int intArray[] = {3, 4, 7, 8, 9, 11, 19};
    int i = sizeof(intArray)/sizeof(int);
    cout << i << endl;
    for(i = i-1; i >= 0; i--) //printing an array backward
    cout << intArray[i] << endl;

    //cout << []
    return 0;
}