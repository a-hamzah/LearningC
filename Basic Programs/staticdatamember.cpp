#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; //Declaring the static variable to be used for all objects
    public:
    void setData(void){
        cout << "Enter ID = ";
        cin >> id;
        count++;
    }
    void getData(void){
        cout << "ID of the employee is = " << id << endl;
        cout << "Employee Number = " << count << endl;
    }
    void totalEmployees(){
        cout << "Total Employees = " << count << endl;
    }
};

int Employee::count; //declaring the static varibale outside the class


int main()
{
 
 Employee Aslam, Noman, Sagir, Arif, Total;
 Aslam.setData();
 Aslam.getData();

 Noman.setData();
 Noman.getData();

 Sagir.setData();
 Sagir.getData();

 Arif.setData();
 Arif.getData();

 Total.totalEmployees();

 



 return 0;
}