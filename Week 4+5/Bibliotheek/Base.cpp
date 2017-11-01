#pragma once
#include <iostream>
#include "Bibliotheek.h"
#include "main.h"

int main() {
	Bibliotheek bieb1 = Bibliotheek();
	bieb1.toon();

	std::cout << "---Boek1" << std::endl;
	bieb1.voegToe("The Hobbit");
	bieb1.toon();

	Bibliotheek bieb2;
	bieb2 = bieb1;

	std::cout << "---Boek2" << std::endl;
	bieb2.toon();

	bieb1.voegToe("One Piece");
	std::cout << "---Boek1" << std::endl;
	bieb1.toon();
	std::cout << "---Boek2" << std::endl;
	bieb2.toon();

	std::cout << "Press key to quit" << std::endl;
	char c;
	std::cin >> c;
	return 0;
}