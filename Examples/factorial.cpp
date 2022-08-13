#include<bits/stdc++.h>

using namespace std;

int main()
{
 int a, factorial = 1;
 cout << "Enter a number to find its factorial = "; cin >> a;
 for (int i = a; i >= 1; i--){
    factorial = factorial * i;
 }

 cout << "Factorial = " << factorial << endl;

 return 0;
}