#include<iostream>
using namespace std;

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
	Mammal()
	{
		hp = 100;
		speed = 1.0;
		cout << "A mammal is created!" << endl;
	}

	~Mammal()
	{
		cout << "A mammal has fallen!" << endl;
	}

	// Common function to all Mammals and derivatives
	void breathe()
	{
		cout << "Breathe in ... breathe out" << endl;
	}

	// Virtual is the same as in C#, or the same as Overridable in VB
	virtual void talk()
	{
		cout << "Mammal talk ... override this function!" << endl;
	}

	// Pure virtual function, exaplained below
	// Seems to be idential to the Abstract(C#) and MustOverride(VB) types
	virtual void walk() = 0;
};

// This next line says that the Dog class inherits from Mammal, using ":" similar to C#
// Note that in C++ you can inherit from MULTIPLE classes. Just take care to avoid ambiguous names for data & methods.
// The 'public' keyword after ":" indicates public inheritance, which means that other code can tell its inheritance structure,
// and therefore can downcast the object.
// YOu can do 'private' instead if it is desired to keep this information, disallowing such casts, although this is rarely done.
class Dog : public Mammal
{
public:
	Dog()
	{
		cout << "A dog is born!" << endl;
	}
	~Dog()
	{
		cout << "The dog died" << endl;
	}

	virtual void talk() override
	{
		cout << "Woof!" << endl;
	}

	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw & back left paw ... at the speed of " << speed << endl;
	}
};

class Cat :public Mammal
{
public:
	Cat()
	{
		cout << "A cat is born!" << endl;
	}
	~Cat()
	{
		cout << "The cat has died" << endl;
	}

	virtual void talk() override
	{
		cout << "Meow!" << endl;
	}

	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw & back left paw ... at the speed of " << speed << endl;
	}
};

class Human : public Mammal
{
	bool civilized;
	
public:
	Human()
	{
		cout << "A new human is born" << endl;
		speed = 2.0; // Change speed. 
		// Since derived class cosntructor runs after base class constructor,
		// initialization sticks initialize member variables specific to this class.
		civilized = true;
	}
	~Human()
	{
		cout << "The human has died" << endl;
	}

	virtual void talk() override
	{
		cout << "I'm good looking for a ... human" << endl;
	}

	virtual void walk() override
	{
		cout << "Left, right, left, right at the speed of " << speed << endl;
	}

	void attack(Human &other)
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
};

int main()
{
	Human human;
	human.breathe();
	human.talk();
	human.walk();

	Cat cat;
	cat.breathe();
	cat.talk();
	cat.walk();

	Dog dog;
	dog.breathe();
	dog.talk();
	dog.walk();
}