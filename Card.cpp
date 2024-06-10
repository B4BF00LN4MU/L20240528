#include "Card.h"
#include <iostream>

using namespace std;

Card::Card()
{
	Type = ECardType::None;
	Shape = " ";
	Number = 0;
}

Card::~Card()
{
}

void Card::SetType(ECardType NewCardType)
{
	Type = NewCardType;
}

void Card::SetShape(string NewShape)
{
	Shape = NewShape;
}

void Card::SetNumber(int NewNumber)
{
	if (NewNumber >= 1 && NewNumber <= 13)
	{
		Number = NewNumber;
	}
}

void Card::ShowNumber()
{
	switch (Number)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	}
}

void Card::GetScore()
{
	if(Number>10)
	{
		return 10;
	}
	return Number;
}

void Card::Show()
{
	string CardType[4] =
	{
		"Clova", "Spade","Geart","Diamond"
	};
	cout << CardType[static_cast<int>(Type)] << " " << Number << endl;

	ShowNumber();
	

	cout << endl;
}
