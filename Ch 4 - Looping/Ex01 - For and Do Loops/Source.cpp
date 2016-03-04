#include<iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (size_t i = 0; i < 10; i++)
	{
		sum += i;
		cout << sum << endl;
	}

	for (size_t i = 6; i <= 30; i += 6)
	{
		cout << i << endl;
	}

	for (size_t i = 2; i <= 100; i += 2)
	{
		cout << i << endl;
	}

	for (size_t i = 1; i <= 16; i++)
	{
		cout << i << "^2 - " << i*i << endl;
	}

	int x = 10;
	do
	{
		cout << x << endl;
		x--;
	} while (x > 0);
}