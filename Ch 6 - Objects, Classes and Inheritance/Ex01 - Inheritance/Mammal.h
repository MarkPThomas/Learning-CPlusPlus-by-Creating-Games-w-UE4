#pragma once // Can be used instead of #ifndef & #define

class Mammal
{
protected:
	// Protected variables are like privates:
	// They are accessible in this class but not outside the class.
	// The difference between protected and private is that protected
	// means that the field is private, yet it is also accessible in derived subclasses.
	int hp;
	double speed;

public:
	// Mammam constructor - runs FIRST before derived class constructors!
	Mammal();
	~Mammal();

	void breathe();
	virtual void talk();

	// Pure virtual function, exaplained below
	// Seems to be idential to the Abstract(C#) and MustOverride(VB) types
	virtual void walk() = 0;
};