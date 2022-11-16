#include <iostream>

class movie {

    private:
    std::string name;
    std::string director;
    int year;
    float rating;
    float price;
    int views;
    int renter;
    std::string dueDate;

    public:

        movie();
        movie(std::string s1, std::string s2, int i1, float f1, float f2, int i2, int i3, std::string s3);
        ~movie();

        std::string getName();
        void setName(std::string temp);

        std::string getDirector();
        void setDirector(std::string temp);

        int getYear();
        void setYear(int year);

        float getRating();
        void setRating(float rating);

        float getPrice();
        void setPrice(float price);

        int getViews() const;
        void setViews(int views);

        int getRenter();
        void setRenter(int renter);

        std::string getDueDate();
        void setDueDate(std::string temp);

        void Display();
        void ChangeMovie();
};