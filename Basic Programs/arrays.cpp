#include <iostream>
#include <string>

//arrays can hold multiple data values

using namespace std;

int main(){
    int luckyNums[] = {4, 8, 15, 16, 23, 42}; //index position starts with 0
    cout << "First Element: " << luckyNums[3] << endl;

    luckyNums[3] = 19; //modifying an array element
    cout << "First Element: " << luckyNums[3] << endl;

    int unluckyNums[3] = {6, 9, 8}; //giving array size upfront
    unluckyNums[4] = 10;
    cout << unluckyNums[4];

    return 0;
}