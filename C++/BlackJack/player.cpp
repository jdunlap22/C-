#include "player.h"

Player::Player() {this->Name = ""; this->CardsDrawn = 0; this->CurrentScore = 0; this-> TotalScore = 0;}

Player::Player(std::string s1, int i1, int i2, int i3) {
           this->Name = s1; this->CardsDrawn = i1; this->CurrentScore = i2; this-> TotalScore = i3;}

Player::~Player(){}

std::string Player::getName(){return this->Name;}
void Player::setName(std::string Name){ this->Name = Name;}

int Player::getCardsDrawn(){return this->CardsDrawn;}
void Player::setCardsDrawn(int CardsDrawn) {this->CardsDrawn = CardsDrawn;}

int Player::getCurrentScore(){return this->CurrentScore;}
void Player::setCurrentScore(int CurrentScore) {this->CurrentScore = CurrentScore;}

int Player::getTotalScore(){return this->TotalScore;}
void Player::setTotalScore(int TotalScore) {this->TotalScore = TotalScore;}