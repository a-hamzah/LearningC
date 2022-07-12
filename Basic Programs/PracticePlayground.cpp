#include<iostream>
using namespace std;
int main()
{
 bool buttonState = true;
 while(buttonState){
    cout << "Button is ON" << endl;
    break;
 }
 cout << "Button is OFF" << endl;
 return 0;
}