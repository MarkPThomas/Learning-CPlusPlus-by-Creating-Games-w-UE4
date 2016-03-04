#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter two number integers, separated by a space " << endl;
	int x, y;
	cin >> x >> y;

	if (x > y)
	{
		cout << "x is greater than y." << endl;
	}
	else
	{
		cout << "y is greater than x." << endl;
	}

	return 0;
}