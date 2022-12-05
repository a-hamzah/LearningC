#include <iostream>

using namespace std;

void Swap(int *xP, int *yP)
{
    int tempNumber;
    tempNumber = *xP;
    *xP = *yP;
    *yP = tempNumber;
}
//=================Swapping using pointers======================
int main()
{
    int a = 10;
    int b = 15;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Swap(&a, &b);
    cout << "----\tNew Values After Swapping\t----" << endl;

    cout
        << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
