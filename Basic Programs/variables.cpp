#include <iostream>

using namespace std;

int main(){
    
    string characterName = "Irshad";
    int characterAge;
    characterAge = 25;
    
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " Years old" << endl;
    characterName = "Hamza"; //Changing name in the middle (use of variables)
    cout << "He liked being " << characterName << endl;
    cout << "But he didn't like being " << characterAge << endl;
    return 0;
}