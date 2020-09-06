#include <iostream>


using namespace std;

int main(){
    
    //-----------------While loop
    /*
    int index = 1;
    while(index == 1){
        cout << "index is 1" << endl;
    }
    while(index != 1){
        cout << "index is not 1" << endl;
    }
    */
    /*
    int index = 0;
    while (index <= 9){
        cout << index << endl;
        index++;
    }
    */
    //----------------do while loop
    int random = 6;
    do{
        cout << random << endl;
    } while(random <= 5);

    int block = 7;
    do{
        cout << block << endl;
        block--;
    } while(block >= 5);
    return 0;
}