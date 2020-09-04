#include <iostream>
#include <string>
#include <cmath>

//arrays can hold multiple data values

using namespace std;

void sayHi1(); //defining function here because it is below main()

//passing arguments in a function
void sayHi2(string name, int age){
    cout << "Hello " << name << ". You are " << age << endl;
}


void areaofrect (){
    double length, width, area;
    cout << "Enter Length = ";
    cin >> length;
    cout << "Enter Width = ";
    cin >> width;
    cout << "Area = " << length*width << endl;
}

int main(){
    cout << "Top\n";
    
    sayHi1();
    sayHi2("Faisal", 19);
    sayHi2("Hamza", 26);
    areaofrect();
    
    cout <<"Bottom\n";

    return 0;
}

void sayHi1(){
    cout << "Hello there!" << endl;
    cout << "Hamza here!" << endl;
}