#pragma once
//#include"Card.h"
#include<vector>

using namespace std;

//class Card;//#inlcude���� �̰� �� ���� : ���� ����

class Deck
{
public:
	Deck();
	virtual ~Deck();


	//	Card Cards[52];
	vector<class Card*>Cards;
	

	void Check();

};

