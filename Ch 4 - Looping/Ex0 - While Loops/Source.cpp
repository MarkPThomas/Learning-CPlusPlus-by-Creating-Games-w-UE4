#include<iostream>

using namespace std;

int main()
{
	int x = 1;

	// Exercise 1
	while (x <= 10)
	{
		cout << x << endl;
		x ++;
	}

	// Exercise 2
	x = 10;
	while (x > 0)
	{
		cout << x << endl;
		x --;
	}

	// Exercise 3
	x = 2;
	while (x <= 20)
	{
		cout << x << endl;
		x += 2;
	}

	// Exercise 4
	x = 1;
	while (x <= 16)
	{
		cout << x << "^2 = " << x*x << endl;
		x ++;
	}


	return 0;
}