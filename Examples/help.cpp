#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, num, numArray[5], sum = 0;
    char op;
    do
    {
        
        cout << "Enter the number = "; cin >> num;
        numArray[i] = num;
        i++;
        cout << "Press y to enter more/Any other key to get sum..."; cin >> op;

        
    } while (op == 'Y' || op == 'y');

    for ( i = i - 1; i >= 0; i--)
    {
        sum += numArray[i];
    }
    
    cout << "Sum = " << sum << endl;
    
    return 0;
}