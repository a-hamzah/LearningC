#include<bits/stdc++.h>
using namespace std;
int main()
{
 float avg;
 int count = 0;
 int marks;
 float sum = 0;
 for(int n = 1; n <= 3; n++){
    cout << "Enter Marks = ";
    cin >> marks;
    sum += marks;
    count++;
 }
 cout << "Sum = " << sum << endl;
 avg = sum/count;
 cout << "Average = " << avg << endl;
 return 0;
}