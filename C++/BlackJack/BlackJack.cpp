#include "card.h"
#include "player.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

void MainMenu();
void StartGame(std::vector <Card> Card);
void PlayerHit(std::vector <Player> Player);
void exitProgram();
void CalculatePlayerScore();
void CalculateHouseScore();
void extern ShuffleDeck();
//void ShuffleDeck();

int main () {

    std::vector <Card> Card;
    std::vector <Player> Player;

    MainMenu();

    int choice = 0;

    std::cin >> choice;

    if (choice = "A" || "a") {
        ShuffleDeck();
        StartGame(Card);
    } else {
        exitProgram();
    }
}

void MainMenu() {

    std::string Name;
    std::cout << "Please Enter Name" << std::endl;
    std::cin >> Name;
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

void StartGame(std::vector <Card> Card) {
    std::string choice;
    std::cout << "Type 'Hit' or 'Stay' to continue" << std::endl;
    std::cin >> choice;
    if (choice == "Hit") {
        PlayerHit(Card);
    }
}

void PlayerHit(std::vector <Card> Card) {
//New card given and score is updated
}

void CalculatePlayerScore(std::vector <Player> Player) {
//everytime new card is drawn if score over 21, player loses (ace is 1 or 11) less than 21 score is ok
if (Player->getTotalScore() > 21) {
    std::cout << "You BUST!" << std::endl;
    CalculateHouseScore();
}

}

void CalculateHouseScore(std::vector <Card> Card) {
//For house house draws cards from where player left off.
if (Player->getTotalScore() > 21) {
    std::cout << "House BUST!" << std::endl;
}