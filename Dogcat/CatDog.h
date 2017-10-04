#pragma once
#include "Animal.h"
class CatDog :
	public Animal
{
public:
	CatDog();
	~CatDog();
	void makeNoise() override;
};

