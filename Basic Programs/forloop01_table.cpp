#include<bits/stdc++.h>
using namespace std;
int main()
{
    int table;
    cout << "Enter the Number to get its table = "; cin >> table;

    for (int i = 1; i <= 10; i++)
    {
        cout << table << " * " <<  i << " = " << table*i << endl;
    }
    
    return 0;
}