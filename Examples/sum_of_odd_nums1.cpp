#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, k = 0, num, remainder, evenArray[15], oddArray[15], evenSum = 0, oddSum = 0;

    char op;
    do
    {
        
        cout << "Enter the number = "; cin >> num;
        remainder = num % 2;
        if(remainder == 0){
            evenArray[i] = num;
            i++;
        }
        else
        {
            oddArray[k] = num;
            k++;
        }
        
        cout << "Press y to enter more/Any other key to get sum..."; cin >> op;

        
    } while (op == 'Y' || op == 'y');

    for ( i = i - 1; i >= 0; i--)
    {
        evenSum += evenArray[i];
    }
    
    for ( k = k - 1; k >= 0; k--)
    {
        oddSum += oddArray[k];
    }
    cout << "Sum of Even Numbers = " << evenSum << endl;
    cout << "Sum of Odd Numbers = " << oddSum << endl;
    

    return 0;
}