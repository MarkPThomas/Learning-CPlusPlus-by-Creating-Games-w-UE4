#include <iostream>

using namespace std;

int main()
{
	int x;
	int y;
	cout << "Enter an integer value for x:" << endl;
	cin >> x;
	cout << "Enter an integer value for y:" << endl;
	cin >> y;
	cout << "x = " << x << ", y = " << y << endl;

	if (x == y)
	{
		cout << "x and y are equal." << endl;
	}
	else
	{
		cout << "x and y are not equal." << endl;
	}

	if (x > y)
	{
		cout << "x is greater than y." << endl;
	}
	else if (y > x)
	{
		cout << "y is greater than x." << endl;
	}
	else
	{
		cout << "x and y are equal." << endl;
	}

	return 0;
}