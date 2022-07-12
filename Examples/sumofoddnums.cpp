#include<iostream>
using namespace std;
int main()
{
 int sum = 0, maxNumber;
 cout << "Enter the Maximum Number = ";
 cin >> maxNumber;
 cout << "Odd Numbers between 0 and " << maxNumber << " are = ";
 for (int n = 1; n <= maxNumber; n+=2){
    cout << n << " ";
    sum += n;
 };
 //cout << endl;
 cout << "\nSum = " << sum << endl;
 return 0;
}