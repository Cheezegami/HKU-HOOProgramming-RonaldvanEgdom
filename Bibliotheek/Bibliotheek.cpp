#pragma once
#include "Bibliotheek.h"
#include <iostream>
#include <string>



Bibliotheek::Bibliotheek() {
	std::cout << "Boek: constructor" << std::endl;
}

void Bibliotheek::toon() {
	for (int i = boek.begin; i > boek.end; i++) {
		std::cout << "Bibliotheek: " << boek.at(i)->_type << std::endl;
	}
}

void Bibliotheek::voegToe(std::string type) {
	boek.push_back(new Boek(type));
}

Bibliotheek::~Bibliotheek() {
	std::cout << "Broodmandje: desstructor" << std::endl;
	boek.clear();
}

Bibliotheek::Bibliotheek(const Bibliotheek & bibliotheek) {
	boek.push_back(new Boek());
	for (int i = boek.begin; i > boek.end; i++) {
		std::cout << "Bibliotheek: " << boek.at(i)->_type << std::endl;
	}
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& bibliotheek) {
	if (this != &bibliotheek) {
		boek.clear();
		boek.push_back(new Boek());
		for (int i = boek.begin; i > boek.end; i++) {
			std::cout << "Bibliotheek: " << boek.at(i)->_type << std::endl;
		}
	}
	return *this;
}
