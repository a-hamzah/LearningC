#include <iostream>
#include <cmath>



using namespace std;

int getMax2numbers(int num1, int num2){
    int result;
    if(num1 > num2){ //other signs can be >=, <=, ==, !=
        result = num1;
    } else{
        result = num2;
    }
    return result;
}
/*
void getMaxUser(){
    int num3, num4;
    cout << "Enter first number = ";
    cin >> num3;
    cout << "Enter second number = ";
    cin >> num4;
    if(num3 > num4){
        cout << "Greater number is = " << num3;
    } else{
        cout << "Greater number is = " << num4;
    }
}
*/
int getMax3numbers(int num5, int num6, int num7){
    int answer;
    if(num5 >= num6 && num5 >= num7){
        answer = num5;
    } else if(num6 >= num5 && num6 >= num7){
        answer = num6;
    } else{
        answer = num7;
    }
    return answer;
}

int main(){
    int answer; //to store the return value of function
    cout << "Greater Number = " << getMax2numbers(13, 23) << endl; 
    //getMaxUser(); //comparison of numbers given by users
    answer = getMax3numbers(80, 65, 65);
    cout << "Greatest Number = " << answer << endl;

    return 0;
}