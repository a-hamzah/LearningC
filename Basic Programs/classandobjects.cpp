#include <iostream>

using namespace std;

//we have just created a blueprint - making book datatype
class Book{
    public:
        string title;
        char category;
        int pubyear;
};

class Board{
    public:
        string boardName;
        char grade;
        string language;
        float rating;
};
int main(){
    
    //declaring first object using class
    Book book1;
    book1.title = "Harry Potter";
    book1.category = 'A';
    book1.pubyear = 2020;
    //second object
    Book book2;
    book2.title = "Rise of Islam";
    book2.category = 'A';
    book2.pubyear = 19;
    
    cout << "Book Name = " << book1.title << endl;
    cout << "Category = " << book1.category << endl;
    cout << "Publish Year = " << book1.pubyear << endl;
    cout << "---------------------------------" << endl;
    
    //arduino
    Board board1;
    board1.boardName = "Arduino";
    board1.grade = 'B';
    board1.language = "C Language";
    board1.rating = 3.1;

    cout << "Board Name = " << board1.boardName << endl;
    cout << "Grade = " << board1.grade << endl;
    cout << "Supported Language = " << board1.language << endl;
    cout << "Grade = " << board1.rating << endl;
    cout << "---------------------------------" << endl;
    //raspberry pi
    Board board2;
    board2.boardName = "Raspberry Pi";
    board2.grade = 'A';
    board2.language = "Python";
    board2.rating = 3.9;

    cout << "Board Name = " << board2.boardName << endl;
    cout << "Grade = " << board2.grade << endl;
    cout << "Supported Language = " << board2.language << endl;
    cout << "Grade = " << board2.rating << endl;

    return 0;
}