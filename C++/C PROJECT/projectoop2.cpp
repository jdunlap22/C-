#include <iostream>
#include <fstream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include "movie.h"

void addMovie(std::vector <movie> &movies);
void browseMovies(std::vector <movie> &movies);
void changeMovie(std::vector <movie> &movies);
void deleteMovie(std::vector <movie> &movies);
void save(std::vector <movie> &movies);
void *load(std::vector <movie> &movies);
void sort(std::vector <movie> &movies);
void searchMovie(std::vector <movie> &movies);
float calculateEarnings(std::vector <movie> &movies);
void exitProgram(std::vector <movie> &movies);

void showMainMenu();
void showLoadMenu();

int main () {

    std::vector <movie> movies;
    int choice = 0;
    float total = 0.00;

    showLoadMenu();
    std::cin >> choice;

    switch (choice) {
        case 1: load(movies); break;
        default: break;
    }

    choice = 0;
    while (choice != 9)
    {
        showMainMenu();

        std::cin >> choice;

        //call function for different options
        switch(choice) 
        {
            case 1: addMovie(movies);break;
            case 2: browseMovies(movies); break;
            case 3: changeMovie(movies); break;
            case 4: deleteMovie(movies); break;
            case 5: save(movies); break;
            case 6: sort(movies); break;
            case 7: searchMovie(movies); break;
            case 8: calculateEarnings(movies); break;
            case 9: exitProgram(movies); break;
            default: std::cout << "Error. Choice not found." << std::endl;
        }
    }

    return 0;
}


void addMovie(std::vector <movie> &movies) {

    movie cinema = movie();
    std::string Choice;
    std::string name;
    std::string director;
    int year;
    float rating;
    float price;
    int views;
    int renter;
    std::string dueDate;

    std::cout<<"Adding new node...."<<std::endl;
    
    std::cout<<"Enter Movie Name."<<std::endl;
    std::cin >> name;
    cinema.setName(name);

    std::cout<<"Enter Director Name."<<std::endl;
    std::cin >> director;
    cinema.setDirector(director);

    std::cout<<"Enter Year."<<std::endl;
    std::cin >> year;
    cinema.setYear(year);

    std::cout<<"Enter Rating."<<std::endl;
    std::cin >> rating;
    cinema.setRating(rating);

    std::cout<<"Enter Price."<<std::endl;
    std::cin >> price;
    cinema.setPrice(price);

    std::cout<<"Enter number of Rentals."<<std::endl;
    std::cin >> views;
    cinema.setViews(views);

    std::cout<<"Enter Number of Current Rentals."<<std::endl;
    std::cin >> renter;
    cinema.setRenter(renter);

    std::cout<<"Enter Due Date."<<std::endl;
    std::cin >> dueDate;
    cinema.setDueDate(dueDate);

    movies.push_back(cinema);
}

void browseMovies(std::vector <movie> &movies) {
    std::cout << "Browsing through entries..." << std::endl;
    std::vector <movie>::iterator itr = movies.begin();

    for (auto itr = movies.begin(); itr != movies.end(); ++itr) {

        itr->Display();
    }
}


void changeMovie(std::vector <movie> &movies) {

    std::string Entry;

    std::cout<< "Modifying entry..." << std::endl;
    std::cout<< "Enter name of movie: " << std::endl;
    std::cin>> Entry;

    std::vector <movie>::iterator itr = movies.begin();

     for (auto itr = movies.begin(); itr != movies.end(); ++itr) {

             if (itr->getName() == Entry) {
                itr->ChangeMovie();

                break;
             }
        }   

    std::cout << "Finished editing..." << std::endl;
}

void deleteMovie(std::vector <movie> &movies) {

    std::string choice;
    std::cout<<"Enter name of movie to delete."<<std::endl;
    std::cin>>choice;
    std::vector <movie>::iterator itr = movies.begin();

    for (auto itr = movies.begin(); itr != movies.end(); ++itr) {
        if(itr->getName() == choice) {
            movies.erase(itr);
        }
    }
}


void save(std::vector <movie> &movies) {

    std::cout << "Saving...."<<std::endl;
    
    std::string LoadFile = ("database.txt");
    std::ofstream Myfile;

    Myfile.open("database.txt", std::ios_base::out);

    if(movies.empty()) {
        std::cout<<"Nothing to Save"<<std::endl;
    } else {
        for(int i = 0; i < movies.size(); i++) {

            Myfile <<movies[i].getName() <<std::endl;
            Myfile <<movies[i].getDirector() <<std::endl;
            Myfile <<movies[i].getYear() <<std::endl;
            Myfile <<movies[i].getRating() <<std::endl;
            Myfile <<movies[i].getPrice() <<std::endl;
            Myfile <<movies[i].getViews() <<std::endl;
            Myfile <<movies[i].getRenter() <<std::endl;
            Myfile <<movies[i].getDueDate() <<std::endl;

        }
    }

   Myfile.close();
}


void *load(std::vector <movie> &movies) {

    movie cinema = movie();
    std::string name;
    std::string director;
    int year;
    float rating;
    float price;
    int views;
    int renter;
    std::string dueDate;

    std::string File;

    std::cout<<"Loading File..."<<std::endl;

    std::string Loadfile = ("database.txt");
    std::ifstream Myfile;

    Myfile.open("database.txt", std::ios::out);
    
    if(Myfile.is_open()) {

        while(!Myfile.eof()) {

            Myfile >> name;
            cinema.setName(name);

            Myfile >> director;
            cinema.setDirector(director);

            Myfile >> year;
            cinema.setYear(year);

            Myfile >> rating;
            cinema.setRating(rating);

            Myfile >> price;
            cinema.setPrice(price);

            Myfile >> views;
            cinema.setViews(views);

            Myfile >> renter;
            cinema.setRenter(renter);

            Myfile >> dueDate;
            cinema.setDueDate(dueDate);

            movies.push_back(cinema);
        }
    }
    Myfile.close();
}

void sort(std::vector <movie> &movies) {

    sort(movies.begin(), movies.end(), [](const movie& lefths, const movie& righths) {
        return lefths.getViews() < righths.getViews();
    });

    std::cout<<"Sorted in ascending order" <<std::endl;

    for (auto itr = movies.begin(); itr != movies.end(); ++itr) {
        std::cout<<itr->getName() <<std::endl;
        std::cout<<itr->getDirector() <<std::endl;
        std::cout<<itr->getYear() <<std::endl;
        std::cout<<itr->getRating() <<std::endl;
        std::cout<<itr->getPrice() <<std::endl;
        std::cout<<itr->getRenter() <<std::endl;
        std::cout<<itr->getViews() <<std::endl;
        std::cout<<itr->getDueDate() <<std::endl;
    }
}

void searchMovie(std::vector <movie> &movies) {
    std::string Entry;

    std::cout<< "Please enter the Name of movie"<<std::endl;
    std::cin>> Entry;
    std::vector <movie>::iterator itr = movies.begin();


        for (auto itr = movies.begin(); itr != movies.end(); ++itr) {

             if (itr->getName() == Entry) {
                 itr->Display();
                break;
             }
        }
}

float calculateEarnings(std::vector <movie> &movies) {

    float Calculate;

    std::vector <movie>::iterator itr = movies.begin();
    
    while (itr != movies.end()) {
        Calculate = itr->getPrice() * itr->getRenter();
        itr++;
    }
    std::cout<<"Total Earnings: "<<Calculate<<std::endl;

    return Calculate;
}

void showMainMenu() {
        std::cout<<"Please choose an option:"<<std::endl;
        std::cout<<"1. Add new entry"<<std::endl;
        std::cout<<"2. Browse entries"<<std::endl;
        std::cout<<"3. Modify existing entry "<<std::endl;
        std::cout<<"4. Delete entry"<<std::endl;
        std::cout<<"5. Save entries "<<std::endl;
        std::cout<<"6. Sort entries"<<std::endl;
        std::cout<<"7. Search for entry"<<std::endl;
        std::cout<<"8. Calculate total"<<std::endl;
        std::cout<<"9. Exit"<<std::endl;
}

void showLoadMenu() {

    std::cout<<"Would you like to:"<<std::endl;
    std::cout<<"1. Load a previously saved library database"<<std::endl;
    std::cout<<"2. Load a new database"<<std::endl;
}

void exitProgram(std::vector <movie> &movies) {
    std::cout<<"Clearing Memory"<<std::endl;

    free(&movies);
    std::cout<<"Memory Freed. Exiting Program..."<<std::endl;
}