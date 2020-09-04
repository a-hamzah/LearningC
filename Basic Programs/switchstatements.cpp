#include <iostream>
#include <cmath>


using namespace std;

string getDayName(int dayNum){
    string dayName;
    
    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Number";
        break;
    }
    return dayName;
}

string getVowels(char letter){
    string vowel;

    switch (letter)
    {
    case 'a':
        vowel = "First Vowel";
        break;
    case 'e':
        vowel = "Second Vowel";
        break;
    case 'i':
        vowel = "Third Vowel";
        break;
    case 'o':
        vowel = "Fourth Vowel";
        break;
    case 'u':
        vowel = "Fifth Vowel";
        break;
    
    default:
        vowel = "Use small vowels only";
        break;
    }
    return vowel;
}

int main()
{
    cout << getDayName(5) << endl;
    cout << getVowels('c');
    return 0;
}