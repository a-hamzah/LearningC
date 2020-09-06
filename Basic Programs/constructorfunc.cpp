#include <iostream>

using namespace std;

class Board{
    public:
        string boardName;
        char grade;
        string language;
        float rating;
        //using contructor function
        Board(string boardNumber){ //this is called constructor function
            cout << boardNumber << endl;
        }
};

class Book{
    public:
        string title;
        char category;
        int pubyear;
        //using contructor function
        Book(string aTitle, char aCategory, int aPubyear){
            title = aTitle;
            category = aCategory;
            pubyear = aPubyear;
        }
        //another constructor with no arguments - it's been called at the bottom
        Book(){
            title = "My Book";
            category = 'D';
            pubyear = 2015;
        }
};


int main(){
    Book book1("Harry Potter", 'A', 2020);
    //second object
    Book book2("Rise of Islam", 'A', 2019);

    
    cout << "Book Name = " << book1.title << endl;
    cout << "Category = " << book1.category << endl;
    cout << "Publish Year = " << book1.pubyear << endl;
    cout << "######################################" << endl;

    cout << "Book Name = " << book2.title << endl;
    cout << "Category = " << book2.category << endl;
    cout << "Publish Year = " << book2.pubyear << endl;
    cout << "######################################" << endl;
    
    //arduino
    Board board1("First Board");
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
    Board board2("Second Board");
    board2.boardName = "Raspberry Pi";
    board2.grade = 'A';
    board2.language = "Python";
    board2.rating = 3.9;

    cout << "Board Name = " << board2.boardName << endl;
    cout << "Grade = " << board2.grade << endl;
    cout << "Supported Language = " << board2.language << endl;
    cout << "Grade = " << board2.rating << endl;

    //calling second constructor Book() here which is inside class Book
    Book book4;
    cout << "Title = " << book4.title;

    return 0;
}