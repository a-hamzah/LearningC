#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, factorial = 1;
    cout << "Enter number = "; cin >> a;
    int b = a;
    while (a >= 1)
    {
        factorial *= a;
        a--;
    }

    cout << "Factorial of " << b << " is = " << factorial << endl;
    
    return 0;
}