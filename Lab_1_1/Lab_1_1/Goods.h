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
	bool SetFirst(double value);
	bool SetSecond(double value);

	bool Init(double first, int second);
	void Read();
	void Display();

	double cost();
};

