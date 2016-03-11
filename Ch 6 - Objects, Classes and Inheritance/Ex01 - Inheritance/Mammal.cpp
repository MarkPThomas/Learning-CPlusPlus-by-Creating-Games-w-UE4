#include<iostream>
using namespace std;

#include "Mammal.h"

Mammal::Mammal()	// Notice te use of :: (Scope resolution operator)
{
	hp = 100;
	speed = 1.0;
	cout << "A mammal is created!" << endl;
}

Mammal::~Mammal()
{
	cout << "A mammal has fallen!" << endl;
}

// Common function to all Mammals and derivatives
void Mammal::breathe()
{
	cout << "Breathe in ... breathe out" << endl;
}

// Virtual is the same as in C#, or the same as Overridable in VB
void Mammal::talk()
{
	cout << "Mammal talk ... override this function!" << endl;
}