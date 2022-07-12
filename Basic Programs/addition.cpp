#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter First Number: ";
    cin >> firstNumber;
    cout << "Enter First Number: ";
    cin >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    //cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers << endl;     
    cout << "Sum = " << sumOfTwoNumbers << endl;
    return 0;
}