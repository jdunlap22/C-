#include <iostream>

class card {
    private:
        int Deck[52];
        int NumCards;
        int CardIndex;
    public:

    card();
    card(int NumCards, int CardValue);
    ~card();

    int getNumCards(int position);
    void setNumCards(int NumCards);

    int getCardIndex();
    void setCardIndex(int CardIndex);

    int getCardValue(int number);
    void setCardValue(int CardValue);

    void ShuffleDeck();
    void Display();
};