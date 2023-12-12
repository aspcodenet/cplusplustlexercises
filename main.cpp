#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ranges>



class Actor
{
public:
    int Id;
    std::string Name;
    int Birthyear;

    std::string ToString()
    {
        return Name;
    }
};


class Movie {
public:
    int Id;
    std::string Title;
    std::string Director;
    int ReleaseYear;
    std::vector<Actor> Actors;

    std::string ToString() {
        return Title + " (" + std::to_string(ReleaseYear) + ") - " + Director;
    }
};

std::vector<Actor> GetAllActors() {
    return std::vector<Actor> {
        {1, "Leonardo DiCaprio", 1974},
        {2, "Joseph Gordon-Levitt", 1981},
        {3, "Ellen Page", 1987},
        {4, "Daniel Day Lewis", 1957},
        {5, "Ciarán Hinds", 1953},
        {6, "Shane Carruth", 1972},
        {7, "Marlon Brando", 1924},
        {8, "Al Pacino", 1940},
        {9, "Robert Duvall", 1931},
        {10, "Johnny Depp", 1963},
        {11, "Sigourney Weaver", 1949},
        {12, "Tom Skeritt", 1933},
        {13, "John Hurt", 1940},
        {14, "Cate Blanchett", 1981},
        {15, "Kate Beckinsale", 1981},
        {16, "Michelle Pfeiffer", 1958}
    };
}

void addActor(Movie &movie, const std::vector<Actor> &actors, int actorId){
    for(int i = 0; i < actors.size();i++){
        if(actors[i].Id == actorId){
            movie.Actors.push_back(actors[i]);
        }
    }
}


std::vector<Movie> getAllMovies() {
    std::vector<Movie> movies = {
        Movie{1, "Inception", "Cristopher Nolan", 2010},
        Movie{2, "There will be blood", "Paul Thomas Anderson", 2007},
        Movie{3, "Primer", "Shane Carruth", 2004},
        Movie{4, "The Godfather", "Francis Ford Coppola", 1972},
        Movie{5, "What's eating Gilberg Grape?", "Lasse Hallström", 1993},
        Movie{6, "Donnie Brasco", "Mike Newell", 1997},
        Movie{7, "Gangs of New York", "Martin Scorsese", 2002},
        Movie{8, "Alien", "Ridley Scott", 1979},
        Movie{9, "The Aviator","Martin Scorsese", 2004},
        Movie{10, "Age of Innocence", "Martin Scorsese", 1993},
        Movie{11, "Tinker Tailor Soldier Spy", "Tomas Alfredson", 2011},
    };
    std::vector<Actor> allActors = GetAllActors();
    
    addActor(movies[0],allActors,1);
    addActor(movies[0],allActors,2);
    addActor(movies[0],allActors,3);

    addActor(movies[1],allActors,4);
    addActor(movies[1],allActors,5);

    addActor(movies[2],allActors,6);
    
    addActor(movies[3],allActors,7);
    addActor(movies[3],allActors,8);
    addActor(movies[3],allActors,9);


    addActor(movies[4],allActors,1);
    addActor(movies[4],allActors,10);


    addActor(movies[5],allActors,8);
    addActor(movies[5],allActors,10);


    addActor(movies[6],allActors,1);
    addActor(movies[6],allActors,4);

    addActor(movies[7],allActors,11);
    addActor(movies[7],allActors,12);
    addActor(movies[7],allActors,13);

    addActor(movies[8],allActors,1);
    addActor(movies[8],allActors,14);
    addActor(movies[8],allActors,15);

    addActor(movies[9],allActors,4);
    addActor(movies[9],allActors,16);

    addActor(movies[10],allActors,13);
    addActor(movies[10],allActors,5);

    return movies;
}

void exercises(){
    // 1. Visa alla filmer som släpptes någon gång under 90-talet.
    // 2. Visa alla filmer vars Actor-lista innehåller tre skådespelare 
    // 3. Visa alla filmer som där någon av skådespelarna i filmen var äldre än 40 år när filmen gjordes
    // 4. Visa alla skådespelare som är äldre än 50 år. Sortera skådespelarna på namn.
    // 5. Visa alla skådespelare som har bokstaven "g" eller ”G” i sitt namn. 
    // 6. Visa för alla skådespelare bara deras namn och ålder. SVÅR
    // 7. Visa en lista innehållande filmtitel, regissör och antal skådespelare för alla filmer.
    // 8. Visa för alla filmer filmens titel, samt genomsnittliga åldern för skådespelarna i filmen TRANSFORM!
    // 9. ta fram alla filmer som gjordes under 2000-talet och där regissören heter Martin Scorsese.Visa bara Titel, release år och regissör.
    // 10. Visa alla skådespelare som är med i mer än en film. Visa också hur många filmer de är med i.
    // 11.visa alla filmer vars årtal är senare än det genomsnittliga årtalet för alla filmer.Sortera resultatet på årtalet i stigande ordning(ascending).
}


int main(){
    //Setup
    std::vector<Movie> movies =  getAllMovies();
    for(auto m : movies){
        std::cout << m.ToString() << std::endl;
        std::cout << "*****************************" << std::endl;
        for(auto a : m.Actors){
            std::cout << a.Name << std::endl;
 
        }
        std::cout << "*****************************" << std::endl;
    }

    //exercises(movies);

    return 0;
}