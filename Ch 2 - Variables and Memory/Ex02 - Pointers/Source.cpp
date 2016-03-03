#include <iostream>
#include <string>

using namespace std;

struct Happy
{
	string Dance;
};

int main()
{
	int x = 22;
	// Print the memory address of x, denoted by &
	cout << &x << endl;		

	// Declaring a pointer
	int *px;	
	
	// Linkage
	px = &x;	

	// Differencing px, denoted by *. 
	// This accesses the variable that px is referencing.
	cout << *px << endl;	

	// Calling the pointer without differencign will return the memory address of the assignment.
	cout << px << endl;

	// Initialization of new pointer variable to null.
	// Make sure this is linked to something before it is called.
	// int *x = 0; 

	Happy happy;
	happy.Dance = "whee!";

	cout << happy.Dance << endl;

	Happy *ph = &happy;
	// Use -> when referencing an object property for a pointer.
	ph->Dance = "Doing the robot!";
	cout << happy.Dance << endl;

	return 0;
}