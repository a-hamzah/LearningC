#include <iostream>

using namespace std;

class Movie{
    private:
    string rating;
    public:
    string title;
    string director;
    
    Movie(string aTitle, string aDirector, string aRating){
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }
    //getters and setters
    void setRating(string aRating){
        if(aRating == "PG" || aRating == "PG-13" || aRating == "PG-18" || aRating == "R"){
            rating = aRating;
        } else{
            rating = "NR";
        }

    }
    string getRating(){
        return rating;
    }
};
//getters and setters are used to force something in object function while dealing with classes

int main(){
    Movie movie1("James Bond", "Hashim", "K");
    cout << movie1.title << endl;
    cout << movie1.director << endl;
    cout << movie1.getRating() << endl;
    //trying to set new rating here
    movie1.setRating("PG");
    cout << movie1.getRating() << endl;
    return 0;
}