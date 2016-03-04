#include <iostream>
#include <string>
using namespace std;

bool isPositive(double arg)
{
	return (arg > 0);
}

// Function returns true when the magnitude of 'a'
// is equal to the magnitude of 'b' (absolute value)
bool absEqual(int a, int b)
{
	return (a*a == b*b);
}

string getGrade(int marks)
{
	if (marks >= 90)
	{
		return "A";
	}
	else if (marks >= 80)
	{
		return "B";
	}
	else if (marks >= 70)
	{
		return "C";
	}
	else if (marks >= 60)
	{
		return "D";
	}
	else
	{
		return "F";
	}
}

double functionFx(double x)
{
	return (3 * x + 4);
}

int main()
{
	cout << "Exercise 1:" << endl;
	int x = -1;
	cout << "isPositive(" << x << ") = " << isPositive(x) << endl;
	x = 1;
	cout << "isPositive(" << x << ") = " << isPositive(x) << endl;
	cout << endl;

	cout << "Exercise 2:" << endl;
	int a = -1;
	int b = 1;
	cout << "absEqual(" << a << ", " << b << ") = " << absEqual(a, b) << endl;
	a = -2;
	cout << "absEqual(" << a << ", " << b << ") = " << absEqual(a, b) << endl;
	a = 2;
	cout << "absEqual(" << a << ", " << b << ") = " << absEqual(a, b) << endl;
	cout << endl;

	cout << "Exercise 3:" << endl;
	x = 89;
	cout << "getGrade(" << x << ") = " << getGrade(x) << endl;
	cout << endl;

	cout << "Exercise 4:" << endl;
	x = 12;
	cout << "functionFx(" << x << ") = " << functionFx(x) << endl;

	return 0;
}