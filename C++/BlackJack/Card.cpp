#include "card.h"

Card::Card() {this->Deck[52];}

Card::Card(int i1) {
           this->Deck[52] = i1;}

Card::~Card(){}

int Card::getDeck(){return this->Deck[52];}
void Card::setDeck(int Deck[52]) {this->Deck[52] = Deck[52];}
