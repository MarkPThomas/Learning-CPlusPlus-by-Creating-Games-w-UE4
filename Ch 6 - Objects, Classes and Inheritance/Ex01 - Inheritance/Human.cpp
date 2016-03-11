#include<iostream>
#include "Mammal.h"
#include "Human.h"

using namespace std;

Human::Human()
{
	cout << "A new human is born" << endl;
	speed = 2.0; // Change speed. 
				 // Since derived class cosntructor runs after base class constructor,
				 // initialization sticks initialize member variables specific to this class.
	civilized = true;
}
Human::~Human()
{
	cout << "The human has died" << endl;
}

void Human::talk()
{
	cout << "I'm good looking for a ... human" << endl;
}

void Human::walk()
{
	cout << "Left, right, left, right at the speed of " << speed << endl;
}

void Human::attack(Human &other)
{
	// Human refuses to attack if civilized
	if (civilized)
	{
		cout << "Why would a human attack another? Je refuse" << endl;
	}
	else
	{
		cout << "A human attacks another!" << endl;
	}
}