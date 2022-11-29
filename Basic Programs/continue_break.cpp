#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0;
    while ( a <= 5 )
    {
        cout << "Pakistan\n";
        a++;
        break;
        cout << "Multan" << endl; // not executed because of continue
        cout << "Peshawar" << endl; // not executed because of continue
    }
    
    cout << endl;
    return 0;
}