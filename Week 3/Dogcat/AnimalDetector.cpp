#include <iostream>
#include "AnimalDetector.h"


void AnimalDetector::detect(Animal animal)
{
	std::cout << "like an animal, maybe?" << std::endl;
}

void AnimalDetector::detect(Cat cat)
{
	std::cout << "here be kittens" << std::endl;
}

void AnimalDetector::detect(Dog dog)
{
	std::cout << "doggo army approaches" << std::endl;
}

void AnimalDetector::detect(CatDog catDog)
{
	std::cout << "a dog nor a cat, an omnious being" << std::endl;
}

AnimalDetector::AnimalDetector()
{
}


AnimalDetector::~AnimalDetector()
{
}
