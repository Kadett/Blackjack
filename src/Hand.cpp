#include "Hand.h"

void Hand::Add(Card *pCard) {
    m_Cards.push_back(pCard);
}

void Hand::Clear() {
    m_Cards.clear();
    m_Cards.shrink_to_fit();
}

int Hand::GetTotal() const {
    int res{}, countAce{};
    const int ACE_ELEVEN = 11, ACE_ONE = 1;
    for (auto &v : m_Cards) {
        if (v->GetValue() == 1) {
            ++countAce;
            continue;
        }
        if (v->GetValue() > 10) {
            res += 10;
            continue;
        }
        res += v->GetValue();
    }

    if (countAce == 0) return res;
    if (countAce == 1) {
        if (res + ACE_ELEVEN > 21) return res + ACE_ONE;
        else return res + ACE_ELEVEN;
    } else { //
        if (res + ACE_ELEVEN + ACE_ONE * (countAce - 1) > 21) return ACE_ONE * countAce + res;
        else return res + ACE_ELEVEN + ACE_ONE * (countAce - 1);
    }


}

