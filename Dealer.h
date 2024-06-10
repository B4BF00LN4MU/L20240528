#pragma once
#include "Card.h"
#include "Character.h"
class Dealer :
    public Card,
    public Character
{
    Dealer();
    virtual ~Dealer();

};

