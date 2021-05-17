#include <iostream> // std::cout
#include <algorithm> // std::generate
#include <vector> // std::vector
#include <ctime> // std::time
#include <numeric> // std::accumulate

#include <array>

using namespace std;

int RandomNumber() { return (std::rand() % 100); }

void print(vector<int> a)
{
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

void task()
{
	//srand(unsigned(time(0)));

	int n;
	cout << "n = ? "; cin >> n;
	vector<int> v(n);

	generate(v.begin(), v.end(), RandomNumber);
	print(v);

	auto result = minmax_element(v.begin(), v.end());
	
	//cout << "min: " << *result.first << " max: " << *result.second << endl;
	cout << "AVG = " << (*result.first + *result.second)*1. / 2 << endl;

}

void create(array<int, 100>& arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}

void print(array<int, 100> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

double avg(array<int, 100> arr, int n)
{
	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		} 

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	return (min + max)*1. / 2;
}

void task1()
{
	//srand((unsigned int)time(NULL));
	int n;
	cout << "n = ? "; cin >> n;
	array<int, 100> arr = { 0 };
	
	create(arr, n);
	print(arr, n);
	cout << "AVG 1 = " << avg(arr, n) << endl;
}

int main()
{
	task();
	cout << endl;
	task1();

	return 0;
}
