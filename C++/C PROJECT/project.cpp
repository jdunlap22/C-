#include <iostream>
#include <fstream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>

//movie struct definition
struct movie {
    std::string name;
    std::string director;
    int year;
    float rating;
    float price;
    int views;
    int renter;
    std::string dueDate;
};

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

    struct movie cinema;
    std::string Choice;

    std::cout<<"Adding new node...."<<std::endl;
    
    std::cout<<"Enter Movie Name."<<std::endl;
    std::cin>>cinema.name;

    std::cout<<"Enter Director Name."<<std::endl;
    std::cin>>cinema.director;

    std::cout<<"Enter Year."<<std::endl;
    std::cin>>cinema.year;

    std::cout<<"Enter Rating."<<std::endl;
    std::cin>>cinema.rating;

    std::cout<<"Enter Price."<<std::endl;
    std::cin>>cinema.price;

    std::cout<<"Enter Number of Rentals."<<std::endl;
    std::cin>>cinema.renter;

    std::cout<<"Enter number of Current Rentals."<<std::endl;
    std::cin>>cinema.views;

    std::cout<<"Enter Due Date."<<std::endl;
    std::cin>>cinema.dueDate;

    movies.push_back(cinema);
}

void browseMovies(std::vector <movie> &movies) {
    std::cout << "Browsing through entries..." << std::endl;
    std::vector <movie>::iterator itr = movies.begin();

    for (auto itr = movies.begin(); itr != movies.end(); ++itr) {

    std::cout<<itr->name<<std::endl;
    std::cout<<itr->director<<std::endl;
    std::cout<<itr->year<<std::endl;
    std::cout<<itr->rating<<std::endl;
    std::cout<<itr->price<<std::endl;
    std::cout<<itr->renter<<std::endl;
    std::cout<<itr->views<<std::endl;
    std::cout<<itr->dueDate<<std::endl;
    }
}


void changeMovie(std::vector <movie> &movies) {

    std::string Entry;

    std::cout<< "Modifying entry..." << std::endl;
    std::cout<< "Enter name of movie: " << std::endl;
    std::cin>> Entry;

    std::vector <movie>::iterator itr = movies.begin();

     for (auto itr = movies.begin(); itr != movies.end(); ++itr) {

             if (itr->name == Entry) {

            std::cout<< "Enter new name of movie: " << std::endl;     
            std::cin>>itr->name;

            std::cout<< "Enter new name of director: " << std::endl;
            std::cin>>itr->director;

            std::cout<< "Enter year: " << std::endl;
            std::cin>>itr->year;

            std::cout<< "Enter new rating: " << std::endl;
            std::cin>>itr->rating;

            std::cout<< "Enter new price: " << std::endl;
            std::cin>>itr->price;

            std::cout<<"Enter new Number of Rentals."<<std::endl;
            std::cin>>itr->renter;

            std::cout<<"Enter new Number of current rentals."<<std::endl;
            std::cin>>itr->views;

            std::cout<<"Enter new Due Date."<<std::endl;
            std::cin>>itr->dueDate;

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
        if(itr->name == choice) {
            movies.erase(itr);
        }
    }
}


void save(std::vector <movie> &movies) {
    struct movie movie;
    std::cout << "Saving...."<<std::endl;
    
    std::string LoadFile = ("database.txt");
    std::ofstream Myfile;

    Myfile.open("database.txt", std::ios_base::out);

    if(movies.empty()) {
        std::cout<<"Nothing to Save"<<std::endl;
    } else {
        for(int i = 0; i < movies.size()-1; ++i) {
            movie = movies[i];
            Myfile <<movie.name <<std::endl;
            Myfile <<movie.director <<std::endl;
            Myfile <<movie.year <<std::endl;
            Myfile <<movie.rating <<std::endl;
            Myfile <<movie.price <<std::endl;
            Myfile <<movie.views <<std::endl;
            Myfile <<movie.renter <<std::endl;
            Myfile <<movie.dueDate <<std::endl;

        }
    }

   Myfile.close();
}


void *load(std::vector <movie> &movies) {
    std::cout<<"Loading File..."<<std::endl;
    struct movie movie;

    std::string Loadfile = ("database.txt");
    std::ifstream Myfile;

    Myfile.open("database.txt", std::ios::out);
    
    if(Myfile.is_open()) {
        while(!Myfile.eof()) {

            Myfile >> movie.name;
            Myfile >> movie.director;
            Myfile >> movie.year;
            Myfile >> movie.rating;
            Myfile >> movie.price;
            Myfile >> movie.views;
            Myfile >> movie.renter;
            Myfile >> movie.dueDate;
            movies.push_back(movie);
        }
    }
    Myfile.close();

}

void sort(std::vector <movie> &movies) {

    sort(movies.begin(), movies.end(), [](const movie& lefths, const movie& righths) {
        return lefths.views < righths.views;
    });

    std::cout<<"Sorted in ascending order" <<std::endl;

    for (auto itr = movies.begin(); itr != movies.end(); ++itr) {
        std::cout<<itr->name<<std::endl;
        std::cout<<itr->director<<std::endl;
        std::cout<<itr->year<<std::endl;
        std::cout<<itr->rating<<std::endl;
        std::cout<<itr->price<<std::endl;
        std::cout<<itr->renter<<std::endl;
        std::cout<<itr->views<<std::endl;
        std::cout<<itr->dueDate<<std::endl;
    }
}

void searchMovie(std::vector <movie> &movies) {
    std::string Entry;

    std::cout<< "Please enter the Name of movie"<<std::endl;
    std::cin>> Entry;
    std::vector <movie>::iterator itr = movies.begin();


        for (auto itr = movies.begin(); itr != movies.end(); ++itr) {

             if (itr->name == Entry) {

            std::cout<<itr->name<<std::endl;
            std::cout<<itr->director<<std::endl;
            std::cout<<itr->year<<std::endl;
            std::cout<<itr->rating<<std::endl;
            std::cout<<itr->price<<std::endl;
            std::cout<<itr->renter<<std::endl;
            std::cout<<itr->views<<std::endl;
            std::cout<<itr->dueDate<<std::endl;
                break;
             }
        }
}

float calculateEarnings(std::vector <movie> &movies) {

    float Calculate;

    std::vector <movie>::iterator itr = movies.begin();
    
    while (itr != movies.end()) {
        Calculate = itr->price * itr->renter;
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
        std::cout<<"8. Calcuate total"<<std::endl;
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