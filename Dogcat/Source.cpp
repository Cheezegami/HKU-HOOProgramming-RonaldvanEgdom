#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Animal.h"
#include "CatDog.h"
#include "AnimalDetector.h"
void saySomeNoise(Animal& animal) {
	animal.makeNoise();
}

int main()
{
	Animal animal;
	Cat cat;
	Dog dog;
	CatDog catDog;

	animal.makeNoise();
	cat.makeNoise();
	dog.makeNoise();
	catDog.makeNoise();

	saySomeNoise(animal);
	saySomeNoise(dog);
	saySomeNoise(cat);
	saySomeNoise(catDog);

	AnimalDetector detector;
	detector.detect(animal);
	detector.detect(dog);
	detector.detect(cat);
	detector.detect(catDog);

	char key;
	std::cin >> key;

    return 0;
}

