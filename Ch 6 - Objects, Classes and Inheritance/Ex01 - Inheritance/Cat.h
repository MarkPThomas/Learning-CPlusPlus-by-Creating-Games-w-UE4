#pragma once

#include "Mammal.h"


class Cat :public Mammal
{
public:
	Cat();
	~Cat();

	virtual void talk() override;

	virtual void walk() override;
};
