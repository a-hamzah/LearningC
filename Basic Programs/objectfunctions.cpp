#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;
        //declaring object function
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        //delcaring an object function - each of the object created can call this func.
        /*
        bool hasHonor1(){
            if(gpa >= 3.5){
                return true;
            } 
            return false;
        }
        */
       string hasHonor2(){
           //string hons;
           if(gpa >= 3.5){
              //hons = "Yes";
              return "YES"; 
           }
            //hons = "No";
            return "NO";
       }
};

int main(){
    
    Student student1("Usama", "Power Engg.", 3.57);
    cout << student1.name << endl;
    cout << student1.major << endl;
    cout << student1.gpa << endl;
    //cout << student1.hasHonor() << endl;
    cout << student1.hasHonor2() << endl; //calling object function
    
    //well defined object including object function calll
    Student student2("Ahmed", "Software Engg.", 2.81);
    cout << "Name : " << student2.name << endl;
    cout << "Major : " << student2.major << endl;
    cout << "GPA : " << student2.gpa << endl;
    //cout << "Honors (0 = No, 1 = Yes) = " << student2.hasHonor() << endl;
    cout << "Honors : " << student2.hasHonor2() << endl;
    
    
    return 0;
}