// Lab.cpp
#include "B.h"

int task()
{
	A a(1);
	B b(2, 3);
	try
	{
		b = B(a);
		cout << "Continue" << endl;
	}
	//catch (B)
	//{
	//	cout << "catch(B)" << endl;
	//	return 1;
	//	//exit(1);
	//}
	catch (A)
	{
		cout << "catch(A)" << endl;
		return 2;
		//exit(2);
	}
	cout << "End" << endl;
	return 0;
}

int main()
{
	return task();
}
