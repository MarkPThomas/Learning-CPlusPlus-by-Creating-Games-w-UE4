#pragma once

#include "Mammal.h"

// This next line says that the Dog class inherits from Mammal, using ":" similar to C#
// Note that in C++ you can inherit from MULTIPLE classes. Just take care to avoid ambiguous names for data & methods.
// The 'public' keyword after ":" indicates public inheritance, which means that other code can tell its inheritance structure,
// and therefore can downcast the object.
// YOu can do 'private' instead if it is desired to keep this information, disallowing such casts, although this is rarely done.
class Dog : public Mammal
{
public:
	Dog();
	~Dog();

	virtual void talk() override;

	virtual void walk() override;
};
