#include <iostream>

using namespace std;

int main()
{
    cout << "Hamza\n"; // New line
    cout << "Are you there?" << endl;
    // same output with different codes
    cout << "Hamza" << endl;
    cout << "Are you there?" << endl;

    cout << "Are you there?\tHamza" << endl; // Space of tab

    //-------------Strong sring inside variable
    string phrase1 = "Hello there, how are you?";
    string phrase2 = "Yes, I am here!";
    string phrase3;

    cout << phrase1 << endl;
    cout << phrase2 << endl;

    // taking input line from the user in a string

    cout << "Enter Phrase 3 = ";
    getline(cin, phrase3);

    cout << "The string you typed is = " << phrase3 << endl;

    //------------String functions

    // printing length of a fuction
    cout << "Length of phrase1 = " << phrase1.length() << endl;
    cout << phrase2.length() << endl;

    // accessing any character of a string
    cout << "First Character of phrase1 = " << phrase1[0] << endl;
    cout << "Second Character of phrase2 = " << phrase2[1] << endl;
    cout << phrase1[2] << endl;

    // assigning a new value inside the string
    phrase1[0] = 'G';
    cout << phrase1 << endl;

    // finding teh position of special character or string in a string
    cout << phrase1.find('r', 0) << endl;
    cout << phrase2.find("am", 0) << endl;

    // substring allows us to take part of a string
    cout << phrase2.substr(7, 2) << endl; // means we have to pick two chars after 7th position
    cout << phrase1.substr(6, 5) << endl;

    // storing substr and length in another string and int
    string phrase2sub = phrase2.substr(7, 2);
    int phrase2length = phrase2.length();
    cout << phrase2sub << endl;
    cout << phrase2length << endl;

    return 0;
}