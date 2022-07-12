#include <iostream>
#include <string>



using namespace std;

int main(){
    string color, pluralNoun, celebrity, adjective;

    cout << "Enter a Color: ";
    getline(cin, color);
    cout << "Enter a Plural Noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a Celebrity Name: ";
    getline(cin, celebrity);
    cout << "Enter an Adjective: ";
    getline(cin, adjective);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are Blue" << endl;
    cout << "Lake is " << adjective << endl;
    cout << "Movie is " << celebrity << endl;
   


    return 0;
}