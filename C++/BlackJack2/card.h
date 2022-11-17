#include <iostream>

class card {
    private:
        int Deck[52];
        int NumCards;
        int CardValue;
    public:

    card();
    card(int NumCards, int CardValue);
    ~card();

    int getNumCards(int position);
    void setNumCards(int NumCards);

    int getCardValue(int number);
    void setCardValue(int CardValue);

    void ShuffleDeck();
};