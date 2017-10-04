#pragma once
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "CatDog.h"
class AnimalDetector
{
public:
	void detect(Animal animal);
	void detect(Cat cat);
	void detect(Dog dog);
	void detect(CatDog catDog);
	AnimalDetector();
	~AnimalDetector();
};

