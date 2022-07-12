#include <iostream>
#include <string>

//arrays can hold multiple data values

using namespace std;

int main(){
    int luckyNums[] = {4, 8, 15, 16, 23, 42}; //index position starts with 0
    cout << "First Element: " << luckyNums[0] << endl;

    luckyNums[3] = 19; //modifying an array element
    cout << "Fourth Element: " << luckyNums[3] << endl;

    int unluckyNums[4] = {6, 9, 8, 10}; //giving array size upfront
    //unluckyNums[4] = 5;
    cout << "Elements of Array = ";
    for(int i = 0 ; i < 4 ; i++){
        cout << unluckyNums[i] << ",";
    }
    cout << endl;
    //cout << unluckyNums << endl;

    return 0;
}