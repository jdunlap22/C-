#include <iostream>
#include <algorithm>

class Card {

    private:
    int Deck[52];
    int CardValue[13] = {1,2,3,4,5,6,7,8,9,10,10,10};

    void ShuffleDeck(int Deck[]) {
        int temp = 0;
        int randomIndex = 0;
        for (int i = 0; i < 52; i++) {
            randomIndex = rand() % 52;
            temp = Deck[i];
            Deck[i] = Deck[randomIndex];
            Deck[randomIndex] = temp;
        }
    }

    public:
    Card(int Deck[52]);
};