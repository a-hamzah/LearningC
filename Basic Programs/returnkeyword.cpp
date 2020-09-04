#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//passing arguments in a function using return type
int square(int num1){
    int result1;
    result1 = num1*num1;
    return result1;
    
}

int cube(){
    int num2, result2;
    cout << "Enter Number to Find Cube = ";
    cin >> num2;
    result2 = num2*num2*num2;
    return result2;
    //cout << "Hello"; Will not work because return has ended the function
}

string fname(string father){
    cout << father;
    return father;
}


int main(){
    
    cout << "Square of Number = " << square(8) << endl;
    
    int answer2 = cube();
    cout << "Cube of Number = " << answer2 << endl;
    
    fname("Idrees");
    

    
    return 0;
}
