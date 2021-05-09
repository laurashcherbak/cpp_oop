#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

template <typename T>
bool IsNotOrdered(T const* begin, T const* end) {
	bool asc = true;
	bool desc = true;

	if (begin == end)
		return asc && desc;

	while (begin != (end - 1) && (asc || desc)) {
		//cout << "begin = " << *begin << "begin + 1 = " << *(begin + 1) << " end = " << *(end - 1) << endl;
		if (*begin < *(begin + 1))
			desc = false;
		if (*begin > * (begin + 1))
			asc = false;
		begin++;
	}

	return asc || desc;
}

template <typename T>
string Print(const T* arr, const int size)
{
	stringstream sout;
	int n = size;// sizeof(arr) / sizeof(arr[0]);
	//cout << n << endl;
	
	for (int i = 0; i < n; i++)
	{
		sout << arr[i];
		if (n - i > 1)
			sout << ",";
		sout << " ";
	}

	return sout.str();
}

int main()
{
	bool o1[] = { false };
	cout << "Array bool o1 = { " << Print(o1, size(o1)) << "} is " << (IsNotOrdered(o1, o1 + size(o1)) ? "" : "not ") << "ordered" << endl;

	int i1[] = { 1, 2, 3, 4, 5 };
	cout << "Array int i1 = { " << Print(i1, size(i1)) << "} is " << (IsNotOrdered(i1, i1 + size(i1)) ? "" : "not ") << "ordered" << endl;
	int i2[] = { 3, 2, 1, 4, 5 };
	cout << "Array int i2 = { " << Print(i2, size(i2)) << "} is " << (IsNotOrdered(i2, i2 + size(i2)) ? "" : "not ") << "ordered" << endl;
	int i3[] = { 5, 4, 3, 2, 1 };
	cout << "Array int i3 = { " << Print(i3, size(i3)) << "} is " << (IsNotOrdered(i3, i3 + size(i3)) ? "" : "not ") << "ordered" << endl;

	char c1[5] = { 'a', 'b', 'c', 'd', 'e' };
	cout << "Array char c1 = { " << Print(c1, size(c1)) << "} is " << (IsNotOrdered(c1, c1 + size(c1)) ? "" : "not ") << "ordered" << endl;
	char c2[5] = { 'a', 'c', 'd', 'b', 'e' };
	cout << "Array char c2 = { " << Print(c2, size(c2)) << "} is " << (IsNotOrdered(c2, c2 + size(c2)) ? "" : "not ") << "ordered" << endl;

	float f1[5] = { 1.01, 2.02, 3.03, 4.04, 5.05 };
	cout << "Array float f1 = { " << Print(f1, size(f1)) << "} is " << (IsNotOrdered(f1, f1 + size(f1)) ? "" : "not ") << "ordered" << endl;
	float f2[5] = { 1.01, 3.03, 2.02, 4.04, 5.05 };
	cout << "Array float f2 = { " << Print(f2, size(f2)) << "} is " << (IsNotOrdered(f2, f2 + size(f2)) ? "" : "not ") << "ordered" << endl;

    return 0;
}


