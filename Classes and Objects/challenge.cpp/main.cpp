#include <iostream>
#include "Movies.h"
#include "Movie.h"

// Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &moves, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name)
{
    if (movies.increment_watched(name))
    {
        std::cout << name << " watch incremented" << std::endl;
    }
    else
    {
        std::cout << name << " not found" << std::endl;
    }
}

int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Cinderella", "PG", 7);

    my_movies.display();

    add_movie(my_movies, "Cinderella", "PF", 7);
    add_movie(my_movies, "Ice Age", "PG", 12);

    my_movies.display();

    increment_watched(my_movies, "Big");
    increment_watched(my_movies, "Ice Age");

    my_movies.display();

    increment_watched(my_movies, "XXX");

    return 0;
}