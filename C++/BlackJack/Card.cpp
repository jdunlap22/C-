#include "card.h"

Card::Card() {
    for (int i=1; i<=52; i++) {
        Deck[i-1] = i;
    }
    
    this->NumCards; this->CardValue;}

Card::Card(int i1, int i2) {
           this->NumCards = i1; this->CardValue = i2;}

Card::~Card(){}

int Card::getNumCards(){return this->Deck[52];}
void Card::setNumCards(int NumCards) {this->NumCards = NumCards;}

int Card::getCardValue(){return this->CardValue[13];}
void Card::setCardValue(int CardValue) {this->CardValue = CardValue;}

int Card::getCardNumber(int position){return Deck[position];}
int Card::getCardValue(int number){
    switch(number)
}

    void Card::ShuffleDeck() {
        int temp = 0;
        int randomIndex = 0;
        for (int i = 0; i < 52; i++) {
            randomIndex = rand() % 52;
            temp = this->Deck[i];
            this->Deck[i] = this->Deck[randomIndex];
            this->Deck[randomIndex] = temp;
        }
    }

