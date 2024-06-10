#pragma once
#include "Card.h"
#include "Character.h"
#include<vector>

class Card;
class Player :
	public Character
{
public:
	Player();
	virtual ~Player();

	vector<Card*>Cards;

	void Draw(Card* NewCard);
};

