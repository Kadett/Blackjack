#pragma once
class Card {
public:
    enum class suits {
        HEART, DIAMOND, CLUB, SPADE
    };
    enum class rank{
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
    };
    Card(suits, rank);
    void Flip();
    int GetValue();
private:
    bool m_IsFaceUp{};
    suits m_Suit;
    rank m_Rank;
};
