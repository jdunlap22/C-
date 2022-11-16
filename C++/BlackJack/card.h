#include <iostream>
#include <algorithm>

class Card {

    private:
    int Deck[52];
    int CardValue[13] = {1,2,3,4,5,6,7,8,9,10,10,10,11};
    int NumCards;
    int CardValue;
    
    public:
    Card();
    Card(int NumCards, int CardValue);
    ~Card();

    int getNumCards();
    void setNumCards(int NumCards);

    int getCardValue();
    void setCardValue(int CardValue);

    void ShuffleDeck();


};