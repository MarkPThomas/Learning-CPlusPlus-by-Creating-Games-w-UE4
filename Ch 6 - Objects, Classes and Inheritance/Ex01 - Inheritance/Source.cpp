#include<iostream>
using namespace std;

#include "Cat.h"
#include "Dog.h"
#include "Human.h"


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