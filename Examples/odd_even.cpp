#include<iostream>

using namespace std;

int main()
{
    int a, remainder, sumOdd = 0, sumEven = 0;
    for(int i = 1; i <= 5; i++){
        cout << "Enter the number = "; 
        cin >> a;
        
        remainder = a % 2;

        if(remainder == 0){
            //cout << a << " is an even number." << endl;
            sumEven += a;
        }
        else
            //cout << a << " is an odd number." << endl;
            sumOdd += a;
    }
    
    cout << "Sum of Even Numbers = " << sumEven << endl;
    cout << "Sum of Odd Numbers = " << sumOdd << endl;

    return 0;
}