#pragma once
#include <iostream>
#include "Hand.h"

class GenericPlayer : public Hand {
std::string _name{};
public:
    virtual bool IsHitting() const = 0;
    bool isBoosted() const;
    void Bust() const;
};




