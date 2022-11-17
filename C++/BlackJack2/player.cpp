#include "player.h"

player::player() {this->Name = ""; this->CardsDrawn = 0; this->CurrentScore = 0; this-> TotalScore = 0;}

player::player(std::string s1, int i1, int i2, int i3) {
           this->Name = s1; this->CardsDrawn = i1; this->CurrentScore = i2; this-> TotalScore = i3;}

player::~player(){}

std::string player::getName(){return this->Name;}
void player::setName(std::string Name){ this->Name = Name;}

int player::getCardsDrawn(){return this->CardsDrawn;}
void player::setCardsDrawn(int CardsDrawn) {this->CardsDrawn = CardsDrawn;}

int player::getCurrentScore(){return this->CurrentScore;}
void player::setCurrentScore(int CurrentScore) {this->CurrentScore = CurrentScore;}

int player::getTotalScore(){return this->TotalScore;}
void player::setTotalScore(int TotalScore) {this->TotalScore = TotalScore;}