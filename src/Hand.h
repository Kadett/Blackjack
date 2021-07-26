#pragma once
#include <vector>
#include "Card.h"
class Hand {
    std::vector<Card*> m_Cards;
public:
    void Add(Card* pCard);
    void Clear();
    int GetTotal();
};


