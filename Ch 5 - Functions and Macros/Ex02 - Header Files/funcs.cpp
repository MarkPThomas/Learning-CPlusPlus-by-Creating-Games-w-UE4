#include "prototypes.h"

int superglobal = 5;	// Variable "implementation"

// Returns true if the value is positive/
bool isPositive(double value)
{
	return (value > 0);
}

// Function returns true when the magnitude of 'a'
// is equal to the magnitude of 'b' (absolute value)
bool absEqual(int a, int b)
{
	return (a*a == b*b);
}

// Returns the appropriate letter grade based on the numerical score.
char getGrade(int grade)
{
	if (grade >= 90)
	{
		return 'A';
	}
	else if (grade >= 80)
	{
		return 'B';
	}
	else if (grade >= 70)
	{
		return 'C';
	}
	else if (grade >= 60)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}

double functionFx(double x)
{
	return (3 * x + 4);
}