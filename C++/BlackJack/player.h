#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

class Player {

    private:
    std::string Name;
    int CardsDrawn;
    int CurrentScore;
    int TotalScore;

    public:

    Player();
    Player(std::string s1, int i1, int i2, int i3);
    ~Player();
    
    std::string getName();
    void setName(std::string Name);

    int getCardsDrawn();
    void setCardsDrawn(int CardsDrawn);

    int getCurrentScore();
    void setCurrentScore(int CurrentScore);

    int getTotalScore();
    void setTotalScore(int TotalScore);
};
#endif