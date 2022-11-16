#include "movie.h"

movie::movie() {this->name = ""; this->director = ""; this->dueDate = ""; 
                this->year = 0; this->views = 0; this-> renter - 0; this->rating = 0; this->price = 0;}

movie::movie(std::string s1, std::string s2, int i1, float f1, float f2, int i2, int i3, std::string s3) {
            this->name = s1; this->director = s2; this->dueDate = s3; 
            this->year = i1; this->views = i2; this-> renter - i3; this->rating = f1; this->price = f2;}

movie::~movie(){}

std::string movie::getName(){return this->name;}
void movie::setName(std::string temp){ this->name = temp;}

std::string movie::getDirector(){return this->director;}
void movie::setDirector(std::string temp){ this->director = temp;}

std::string movie::getDueDate(){return this->dueDate;}
void movie::setDueDate(std::string temp){ this->dueDate= temp;}

int movie::getYear(){return this->year;}
void movie::setYear(int year) {this->year = year;}

int movie::getViews()const {return this->views;}
void movie::setViews(int views) {this->views = views;}

int movie::getRenter(){return this->renter;}
void movie::setRenter(int renter) {this->renter = renter;}

float movie::getRating(){return this->rating;}
void movie::setRating(float rating) {this->rating = rating;}

float movie::getPrice(){return this->price;}
void movie::setPrice(float price) {this->price = price;}

void movie::Display() {

    std::cout << "Movie Name: " << this->name << std::endl;
    std::cout << "Director Name: " << this->director << std::endl;
    std::cout << "Year: " << this->year << std::endl;
    std::cout << "Rating: " << this->rating << std::endl;
    std::cout << "Price: " << this->price << std::endl;
    std::cout << "Number of Views: " << this->views << std::endl;
    std::cout << "Number of Rentals: " << this->renter << std::endl;
    std::cout << "Return Date: " << this->dueDate << std::endl;
}

void movie::ChangeMovie() {

            std::cout<< "Enter new name of movie: " << std::endl;     
            std::cin>>this->name;

            std::cout<< "Enter new name of director: " << std::endl;
            std::cin>>this->director;

            std::cout<< "Enter year: " << std::endl;
            std::cin>>this->year;

            std::cout<< "Enter new rating: " << std::endl;
            std::cin>>this->rating;

            std::cout<< "Enter new price: " << std::endl;
            std::cin>>this->price;

            std::cout<<"Enter new Number of Rentals."<<std::endl;
            std::cin>>this->views;

            std::cout<<"Enter new Number of current rentals."<<std::endl;
            std::cin>>this->renter;

            std::cout<<"Enter new Due Date."<<std::endl;
            std::cin>>this->dueDate;
}

