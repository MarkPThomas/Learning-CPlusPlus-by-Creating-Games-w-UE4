#pragma once

#include "Mammal.h"

class Human : public Mammal
{
	bool civilized;

public:
	Human();
	~Human();

	virtual void talk() override;

	virtual void walk() override;

	void attack(Human &other);
};
