#include<iostream>
#include "Mammal.h"
#include "Dog.h"

using namespace std;


Dog::Dog()
{
	cout << "A dog is born!" << endl;
}
Dog::~Dog()
{
	cout << "The dog died" << endl;
}

void Dog::talk() 
{
	cout << "Woof!" << endl;
}

void Dog::walk() 
{
	cout << "Left front paw & back right paw, right front paw & back left paw ... at the speed of " << speed << endl;
}