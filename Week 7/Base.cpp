#include <iostream>
#include <fstream>
#include <string>
#include "SnelTrein.h"
#include "Trein.h"
#pragma once

int main() {

	SnelTrein snelTrein = SnelTrein(300, 3.0f, 5);
	Trein trein = Trein(300, 2.5f);

	int afstand = 50;

	std::cout << snelTrein.BerekenPrijs(afstand) << std::endl;
	std::cout << trein.BerekenPrijs(afstand) << std::endl;

	std::cout << "Press key to quit" << std::endl;
	char c;
	std::cin >> c;
	return 0;
}