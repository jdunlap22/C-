#include "card.h"
#include "player.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

void MainMenu(player Player1);
void PlayerHit(card Card1, int &score);
void CalculateScore();
void exitProgram();
void ShuffleDeck();

int main () {

    card Card1;
    player Player1;
    int score = 0;

    MainMenu(Player1);

    std::string choice;

    std::cin >> choice;

    if (choice == "A" || choice == "a") {
        Card1.ShuffleDeck();
    } else {
        exitProgram();
    }

    int NumCards = 2;
    //Card1.Display();

    for ( int i = 0; i < NumCards; i++ ) {
        int CardNum = Card1.getNumCards(i);
        int CardValue = Card1.getCardValue(CardNum);
        score += CardValue;
        Card1.setCardIndex(i);
        std::cout << CardValue << " " << score << std::endl;
    }

    bool ChoiceHit = true;
    while (ChoiceHit) {
        std::cout << "Type 'Hit' or 'Stay' to continue" << std::endl;
        std::cin >> choice;
     if (choice == "Hit") {
        PlayerHit(Card1, score);
        //CalculateScore();
     } else {
        ChoiceHit = false;
        //CalculateHouseScore();
     }
    }
}

void MainMenu(player Player1) {

    std::string Name;
    std::cout << "Please Enter Name" << std::endl;
    std::cin >> Name;
    Player1.setName(Name);
    std::cout << "Hello " << Name << std::endl;
    std::cout << "OPTIONS MENU" << std::endl;
    std::cout << "A. Start Game" << std::endl;
    std::cout << "B. Exit" << std::endl;
}

void exitProgram() {
    std::cout<<"Goodbye"<<std::endl;
    std::cout<<"Memory Freed. Exiting Program..."<<std::endl;
    exit(0);
}

void PlayerHit(card Card1, int &score) {
    int CardNum = Card1.getCardIndex() + 1;
    int CardValue = Card1.getCardValue(CardNum);
    score += CardValue;
    std::cout << CardValue << " " << score << std::endl;
}

void CalculateScore() {

}

void CalculateHouseScore() {

}