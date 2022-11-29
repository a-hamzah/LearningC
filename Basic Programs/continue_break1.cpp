#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    char section, op;
    int age;
    while (1)
    {
        cout << "Enter Name = "; cin >> name;
        cout << "Enter Age = "; cin >> age;
        cout << "Enter Section = "; cin >> section;
        cout << name << "\t" << age << "\t" << section << endl;
        cout << "Enter Y to continue..."; cin >> op;
        if(op == 'Y' || op == 'y')
        continue;
        else
        break;
    }
    
    return 0;
}