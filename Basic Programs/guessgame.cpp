#include <iostream>


using namespace std;

int main(){
    int secretNum = 7, guess, guessLimit = 5, guessCount = 0;
    bool outOfGuesses = false;

    //Using while loop
    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter Number = ";
            cin >> guess;
            if(guess > secretNum){
                cout << "Too large!" << endl;
            } else if(guess < secretNum){
                cout << "Too small!" << endl;
            }
            guessCount++;
        } else{
            outOfGuesses = true;
        }
    }
    if(outOfGuesses){
        cout << "You Lose!";
    } else{
        cout << "You Win!";
    }
    



    //using do while loop
    
    
    /*
    do{
        cout << "Enter Your Number = ";
        cin >> guess;
    } while(guess != secretNum);
    cout << "You Win!";
    */
    return 0;
}