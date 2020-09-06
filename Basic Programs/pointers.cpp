#include <iostream>

using namespace std;

int main(){
    int height = 5;
    string name = "Akram";
    char grade = 'B';
    double gpa = 3.7;
    /*
    cout << "Height Address = " << &height << endl;
    cout << "Grade Address = " << &grade << endl;
    cout << "Name Address = " << &name << endl;
    cout << "GPA Address = " << &gpa << endl;
    */
    //Storing addresses in pointers
    int *pHeight = &height;
    string *pName = &name;
    double *pGpa = &gpa;
    char *pGrade = &grade;

    cout << pHeight << endl;
    cout << pGrade << endl;
    cout << pGpa << endl;

    //de-referencing a pointor (getting the actual stored value)
    cout << *pGpa << endl;
    cout << *&grade;
    return 0;
}