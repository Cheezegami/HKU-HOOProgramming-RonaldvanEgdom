#include <iostream>
#include "Melk.h"
#include "Pak.h"

int main() {
	Pak* pak = new Pak();
	pak->voegMelkToe("5 Liter melk");
	pak->tonen();

	delete pak;

	char c;
	std::cin >> c;
	return 0;
}