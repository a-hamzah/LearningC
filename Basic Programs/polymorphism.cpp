#include"bits/stdc++.h"
using namespace std;

//function overloading

class psycho{
    public:
    void fun(){
        cout << "I'm a function with no arguments" << endl;

    }

    void fun(int x){
        cout << "I'm a function with int argument" << endl;
    }

    void fun(double x){
        cout << "I'm a function with argument" << endl;
    }
};

int32_t main(){
    psycho pink;
    pink.fun();
    pink.fun(5);
    pink.fun(3.5);
}
