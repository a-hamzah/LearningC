#include<iostream>
using namespace std;

class Encapsulation{
    private:
    int x;
    public:
    void setData(int a){
        x = a;
    }
    int getData(){
        return x;
    }
};

int main()
{
 Encapsulation obj1;
 obj1.setData(2);
 cout << obj1.getData() << endl;

 return 0;
}