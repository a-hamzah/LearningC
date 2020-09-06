#include <iostream>


using namespace std;

void printClass(int className){
string class7[] = {"Faisal", "Bilal", "Kamran", "Naveed", "Khan"};
    string class8[] = {"Asjad", "Asad", "Asif", "Armaan", "Arjun"};
    int k;
    switch (className)
    {
    case 7:
        for(k = 0; k < 5; k++){
            cout << class7[k] << endl;
        }
        break;
    case 8:
        for(k = 0; k < 5; k++){
            cout << class8[k] << endl;
        }
        break;
    default:
        cout << "Invalid" << endl;
        break;
    }
}
   
//power function using for loop

int powerFunc(int baseNum, int expNum){
    int ans = 1;
    for(int z = 1; z <= expNum ; z++){
        ans = ans * baseNum;
    }
    return ans;
}
int main(){
    /*
    int inputClass;
    cout << "Enter Class Name (7 or 8) = ";
    cin >> inputClass;
    printClass(inputClass);*/
    cout << powerFunc(3, 4);

/*
    for(int i = 1; i <= 5; i++){
        cout << i << endl;
    }
    
    //printing elements of an array using for loop
    int evenNums[] = {2, 4, 6, 8, 10, 12};
    for(int j = 0; j < 6; j++){
        cout << evenNums[j] << endl;
    }
*/
 
/*    
    int index = 1;
    while (index <= 5){
        cout << index << endl;
        index++;
    }
*/
    return 0;
}