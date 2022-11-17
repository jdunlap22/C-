#include "card.h"

card::card() {

    for (int i = 1; i <= 52; i++) {

        Deck[i-1] = i;
    }

    this->NumCards; this->CardValue;}

card::card(int i1, int i2) {this->NumCards = i1; this->CardValue = i2;}

card::~card(){}

int card::getNumCards(int position) {return this->Deck[position];}
void card::setNumCards(int NumCards) {this->NumCards = NumCards;}

void card::setCardValue(int CardValue) {this->CardValue = CardValue;}
int card::getCardValue(int number){
    switch(number) {

        case 1:
            number = 1;
        case 2:
            number = 2;
        case 3:
            number = 3;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12: 
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        break;

    }
    return 0; 
}

void card::ShuffleDeck() {
    
        int temp = 0;
        int randomIndex = 0;
        for (int i = 0; i < 52; i++) {
            randomIndex = rand() % 52;
            temp = this->Deck[i];
            this->Deck[i] = this->Deck[randomIndex];
            this->Deck[randomIndex] = temp;

        }

        //for (int i = 1; i <= 52; i++) {
            //std::cout << Deck[i-1] << std::endl;
        //}
}