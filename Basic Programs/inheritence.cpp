#include <iostream>

using namespace std;

class Chef{ //super class
    public:
    void makeChicken(){
        cout << "The Chef can make chicken." << endl;
    }
    void makeMutton(){
        cout << "The Chef can make mutton." << endl;
    }
    void makeBeef(){
        cout << "The Chef can make beef." << endl;
    }
};
//using inheritence here
class ItalianChef : public Chef{ // subclass
    public:
    void makePasta(){
        cout << "The Chef can make pasta." << endl;
    }
        void makeBeef(){ //overriding a function of previous class
        cout << "The Chef can make good beef." << endl;
    }
};
//just practicing previous stuff
class Esp32v1{
    public:
    string serial;
    string bluetooth;
    string wifi;
};

int main(){
    Chef chef1;
    chef1.makeChicken();
    ItalianChef chef2;
    chef2.makeChicken();
    chef2.makePasta();
    //this function was overridden 
    chef2.makeBeef();
//old stuff
    Esp32v1 board1;
    board1.serial = "Available";
    cout << board1.serial;

    return 0;
}