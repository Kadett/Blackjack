#include "Card.h"

Card::Card(Card::suits suit, Card::rank value) : m_Suit(suit), m_Rank(value) {}

void Card::Flip() {
    m_IsFaceUp = !m_IsFaceUp;
}

int Card::GetValue() {
    return (int)m_Rank;
}
