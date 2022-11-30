
//this code takes full name of a user and prints its middle name.

#include <iostream>

using namespace std;

int main()
{
    char fName[50];
    cout << "Enter your full name: ";
    cin.get(fName, 50); //string to read a line of text
    
    for(int i = 0; fName[i]!='\0'; i++){
        if (fName[i] == ' ')
        {
            for(i = i+1; fName[i] != ' '; i++)
            cout << fName[i];
            
        }
    }
    return 0;
}