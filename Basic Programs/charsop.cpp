
//counting spaces and number of string in a string stored in char array
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char h[50] = "Blank Pitch Home";
    int i = 0;
    int spaces = 0;
    int count = 0;
    while (h[i] != '\0')
    {
        count++;
        if(h[i] == ' '){
            spaces++;            
        }

        cout << h[i];
        i++;
    }
    cout << endl;
    cout << "Total Counted String Length = " << count;
    cout << endl;
    cout << "Number of Spaces = " << spaces;
    cout << endl;
    cout << "String Length without spaces = " << count - spaces;
    cout << endl;

    return 0;
}