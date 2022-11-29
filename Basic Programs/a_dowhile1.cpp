#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks, age;
    char op;
    string name;
    
    do
    {
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Age: "; cin >> age;
    cout << "Enter Marks: "; cin >> marks;
    cout << "Record Stored: ";
    cout << name << "\t" << age << "\t" << marks << endl;
    cout << "Press y to enter more record..." << endl;
    cin >> op;

    } while (op == 'Y' || op == 'y');
    
    


    
    return 0;
}