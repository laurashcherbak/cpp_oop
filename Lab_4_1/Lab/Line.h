// Line.h
#pragma once
#include "ABase.h"

class Line :
	public ABase
{
public:
	Line(void);
	Line(int a, int b);
	~Line(void);

	virtual bool ExistsRoot();

	friend ostream& operator <<(ostream& out, Line& v);

};
