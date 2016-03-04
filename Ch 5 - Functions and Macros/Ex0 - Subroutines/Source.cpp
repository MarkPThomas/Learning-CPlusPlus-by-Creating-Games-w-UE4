#include<iostream>

using namespace std;

void myFunction()
{
	cout << "You called?" << endl;
}

int main()
{
	cout << "I'm going to call myFunction now." << endl;
	myFunction();

	return 0;
}