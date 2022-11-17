#include "card.h"

card::card() {

    for (int i = 1; i <= 52; i++) {

        Deck[i-1] = i;
    }
}

card::card(int i1, int i2) {this->NumCards = i1; this->CardIndex = i2;}

card::~card(){}

int card::getNumCards(int position) {return this->Deck[position];}
void card::setNumCards(int NumCards) {this->NumCards = NumCards;}

int card::getCardIndex(){return this->CardIndex;}
void card::setCardIndex(int CardIndex){this->CardIndex = CardIndex;}

int card::getCardValue(int number){

    switch(number) {

        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        case 8:
            return 8;
        case 9:
            return 9;
        case 10:
            return 10;
        case 11:
            return 10;
        case 12: 
            return 10;
        case 13:
            return 10;
        case 14:
            return 1;
        case 15:
            return 2;
        case 16:
            return 3;
        case 17:
            return 4;
        case 18:
            return 5;
        case 19:
            return 6;
        case 20:
            return 7;
        case 21:
            return 8;
        case 22:
            return 9;
        case 23:
            return 10;
        case 24:
            return 10;
        case 25:
            return 10;
        case 26:
            return 10;
        case 27:
            return 1;
        case 28:
            return 2;
        case 29:
            return 3;
        case 30:
            return 4;
        case 31:
            return 5;
        case 32:
            return 6;
        case 33:
            return 7;
        case 34:
            return 8;
        case 35:
            return 9;
        case 36:
            return 10;
        case 37:
            return 10;
        case 38:
            return 10;
        case 39:
            return 10;
        case 40:
            return 1;
        case 41:
            return 2;
        case 42:
            return 3;
        case 43:
            return 4;
        case 44:
            return 5;
        case 45:
            return 6;
        case 46:
            return 7;
        case 47:
            return 8;
        case 48:
            return 9;
        case 49:
            return 10;
        case 50:
            return 10;
        case 51:
            return 10;
        case 52:
            return 10;
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

void card::Display() {
    for (int i = 0; i < 52; i++) {
        std::cout << this->Deck[i] << std::endl;
    }
}