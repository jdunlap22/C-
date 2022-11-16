#include "card.h"
#include "player.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

void MainMenu();
void StartGame();
void PlayerHit();
void exitProgram();
void CalculatePlayerScore();
void CalculateHouseScore();
void ShuffleDeck();

int main () {
    std::vector <blackjacks> blackjack;
    blackjacks blackjack;

    void MainMenu();

    int choice = 0;

    if (choice == 1) {
        ShuffleDeck();
        StartGame();
    } else {
        exitProgram();
    }
}

void MainMenu() {

    std::string Name;
    std::cout << "Please Enter Name" << std::endl;
    std::cin >> Name;
    std::cout << "Options Menu" << std::endl;
    std::cout << "A. Start Game" << std::endl;
    std::cout << "B. Exit" << std::endl;
}

void exitProgram() {
    std::cout<<"Goodbye"<<std::endl;
    std::cout<<"Memory Freed. Exiting Program..."<<std::endl;
    exit(0);
}

void StartGame() {
    std::string choice;
    std::cout << "Type 'Hit' or 'Stay' to continue" << std::endl;
    std::cin >> choice;
    if (choice == "Hit") {
        PlayerHit();
    }
}

void PlayerHit(std::vector <blackjacks> &blackjack) {
//New card given and score is updated
}

void CalculatePlayerScore(std::vector <blackjacks> &blackjack) {
//everytime new card is drawn if score over 21, player loses (ace is 1 or 11) less than 21 score is ok
}

void CalculateHouseScore(std::vector <blackjacks> &blackjack) {
//For house house draws cards from where player left off.
}