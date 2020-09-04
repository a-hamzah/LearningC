#include <iostream>
#include <string>


using namespace std;

int main(){
    bool isMale = false;
    bool isTall = false;

    //Simple if else
    if(isMale){
        cout << "You are male." << endl;
    } 
    else
    {
        cout << "You are not male." << endl;
    }
    
    
    //and operator - both should be true for the condition to be true
    if(isMale && isTall){
        cout << "Both are true" << endl;
    }
    else
    {
        cout << "At least one is not true" << endl;
    }
    
    //or operator - at least one should be true for the conditio to be true
    if(isMale || isTall){
        cout << "At least one is true." << endl;
    } else 
    {
        cout << "Both are false." << endl;
    } 
    
    //checking a number is positive or not
    bool isPositive = false;
    if(isPositive){
        cout << "Number is positive." << endl;
    }
    else
    {
        cout << "Number is not positive." << endl;
    }
    
    //checking all possible scenarios
    if(isMale && isTall){
        cout << "You're male and tall." << endl;
    } else if(isMale && !isTall){
        cout << "You're male and not tall." << endl;
    } else if(!isMale && isTall){
        cout << "You're not male but tall." << endl;
    } else{
        cout << "You are neither male nor tall." << endl;
    }

    return 0;
}