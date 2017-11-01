#pragma once
#include <iostream>
#include "Bibliotheek.h"
#include "main.h"

int main() {
	Bibliotheek Boek1 = Bibliotheek();
	Boek1.toon();

	std::cout << "---Boek1" << std::endl;
	Boek1.voegToe("The Hobbit");
	Boek1.toon();

	Bibliotheek Boek2;
	Boek2 = Boek1;

	std::cout << "---Boek2" << std::endl;
	Boek2.toon();

	Boek1.voegToe("One Piece");
	std::cout << "---Boek1" << std::endl;
	Boek1.toon();
	std::cout << "---Boek2" << std::endl;
	Boek2.toon();

	std::cout << "Press key to quit" << std::endl;
	char c;
	std::cin >> c;
	return 0;
}