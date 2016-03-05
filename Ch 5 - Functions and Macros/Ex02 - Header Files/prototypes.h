// Makes sure these prototypes are only included in compilation once
#pragma once

// Make a variable available globally with 'extern'
extern int superglobal; 

// function prototypes
bool isPositive( double value );
bool absEqual(int a, int b );
char getGrade(int grade);


//inline int printlnInline(std::string X)
//{
//	cout << X << endl;
//
//	return 0;
//}

inline int printlnInline(int a, int b)
{
	if (a > b) return a;
	else return b;
}