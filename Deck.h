#pragma once
//#include"Card.h"
#include<vector>

using namespace std;

//class Card;//#inlcude보다 이게 더 빠름 : 전방 선언

class Deck
{
public:
	Deck();
	virtual ~Deck();


	//	Card Cards[52];
	vector<class Card*>Cards;
	

	void Check();

};

