#include "card.h"
#include "player.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

void MainMenu();
void StartGame(card Card1, player Player1);
void PlayerHit();
void exitProgram();
void ShuffleDeck();

int main () {

    card Card1;
    player Player1;

    MainMenu();

    std::string choice;

    std::cin >> choice;

    if (choice == "A" || choice == "a") {
        Card1.ShuffleDeck();
        StartGame(Card1);
    } else {
        exitProgram();
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

void StartGame(card Card1) {
    int Score = 0;
    std::string choice;
    std::cout << Card1.getNumCards(0) << " " << Card1.getNumCards(1) <<std::endl;
    Score = Card1.setCardValue(0) + Card1.setCardValue(1);
    std::cout << "Type 'Hit' or 'Stay' to continue" << std::endl;
    std::cin >> choice;
    if (choice == "Hit") {
        std::cout << Card1.getNumCards(2) << std::endl;
    }
}