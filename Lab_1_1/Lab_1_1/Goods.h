//////////////////////////////////////////////////////////////////////////////
// Goods.h

#pragma once

class Goods
{
private:
	double first;
	int second;

public:
	double GetFirst() const;
	int GetSecond() const;
	void SetFirst(double value);
	void SetSecond(double value);

	bool Init(double first, int second);
	void Read();
	void Display();

	double cost();
};

