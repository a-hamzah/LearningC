#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int num1, num2, answer;
    char op;

    cout << "Enter First Number = ";
    cin >> num1;
    cout << "Enter Operator = ";
    cin >> op;
    cout << "Enter Second Number = ";
    cin >> num2;

    if(op == '+'){
        answer = num1 + num2;
    } else if(op == '-'){
        answer = num1 - num2;
    } else if(op == '*'){
        answer = num1 * num2;
    } else if(op == '/'){
        answer = num1 / num2;
    } else{
        cout << "Invalid Operator" << endl;
    }

    cout << "Answer = " << answer << endl;
    return 0;
}