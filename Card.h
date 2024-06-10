#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class ECardType
{
	None=-1,
	Spade = 0,
	Diamond = 1,
	Heart = 2,
	Clover = 3,
	Max
};

class Card
{
public:
	Card();
	virtual ~Card();

	void Show();

	void SetType(ECardType NewCardType);
	void SetShape(string NewShape);
	void SetNumber(int NewNumber);
	void ShowNumber();
	void GetScore();

protected:
	ECardType Type;
	string Shape;
	int Number;
};

