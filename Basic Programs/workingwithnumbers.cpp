#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << 6+7 << endl;
    cout << 10%3 << endl;
    cout << 10/3 << endl;
    cout << 10.0/3.00 << endl;
    cout << 5 + 7 * 10 << endl;
    cout << (6+7)*10 << endl;

    //storing numbers in variables
    int num1 = 10;
    float num2 = 5.3;
    double num3 = 13.75;
    double num2num3 = num2 + num3;
    cout << num1 << endl;
    cout << num2num3 << endl;
    /*num1++; //incrementing numbers stored in a variable
    num2--;
    num3+=50;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;*/
    num1/=10; 
    num2-=5;
    num3*=5;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;  

    //using some math functions
    cout << pow(2, 3) << endl;
    cout << sqrt(49) << endl;
    cout << sqrt(36.0) << endl; 
    cout << round(13.543) << endl;
    cout << ceil(9.1) << endl; //rounds number to next number
    cout << floor(7.8) << endl; //rounds number to previous number
    cout << fmax(49, 40) << endl; //returns big number
    cout << fmin(49, 4) << endl;

    return 0;
}