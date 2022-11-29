#include<iostream>
using namespace std;

int main()
{
    int table, numbers, n = 1;
    cout << "Enter the value of table = "; cin >> table;
    while (n <= 10)
    {
        cout << table << " x " << n << " = " << table * n << endl;
        n++;
    }

    return 0;
}

//printing table of any number in format 2 x 1 = 2 (Pg # 93)