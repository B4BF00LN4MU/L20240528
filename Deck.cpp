#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <vector>

using namespace std;

Deck::Deck()
{
	Card* Temp = new Card();

	for (int Type = 0; Type < 4; ++Type)
	{
		for (int Number = 1; Number <= 13; ++Number)
		{
			Card* Temp = new Card();
			//switch (Type)
			//{
			//case 0:
			//	Temp->SetType(ECardType::Spade);
			//		break;
			//case 1:
			//	Temp->SetType(ECardType::Diamond);
			//		break;
			//case 2:
			//	Temp->SetType(ECardType::Heart);
			//		break;
			//case 3:
			//	Temp->SetType(ECardType::Clover);
			//		break;
			//default:
			//	break;
			//}
			Temp->SetType(static_cast<ECardType>(Type));
			Temp->SetNumber(Number);

			Cards.push_back(Temp);
		}
	}

}

Deck::~Deck()
{
}

void Deck::draw()
{
}

void Deck::Check()
{
	//for (int i = 0; i < Cards.size(); ++i)
	//{
	//	Cards[i]->Show();
	//}
	for (Card* Card : Cards)
	{
		Card->Show();
	}
}