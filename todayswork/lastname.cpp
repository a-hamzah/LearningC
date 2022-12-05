#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int len, count = 0, newlen = 0;
    cout << "Enter your father name: ";
    getline(cin, name); // taking string as input from user

    len = name.length(); // taking string length and storing it in len

    // running the first for loop to count characters till first space STARTING FROM THE END OF THE STRING
    for (int i = len; name[i] != ' '; i--)
    {
        count++;
    }
    newlen = len - count; // defining new length
    cout << "Last Name = ";
    // running for loop to print the string using new length till the end of the strin '\0'
    for (int k = newlen + 1; name[k] != -'\0'; k++)
    {
        cout << name[k];
    }

    //

    return 0;
}
