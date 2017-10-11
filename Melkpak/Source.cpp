#include <iostream>
#include "Melk.h"
#include "Pak.h"

int main() {
	Pak* pak = new Pak();
	pak->voegMelkToe("5 Liter");
	pak->tonen();

	delete pak;

	Pak pakje = Pak();
	pakje.vulMelk("10 Liter");
	pakje.tonen();
	pakje.voegMelkToe("20 Milliliter");
	pakje.tonen();
	Pak pakje2 = pakje;
	pakje2.tonen();
	pakje.voegMelkToe("8 Illimilliliter");
	pakje.tonen();
	pakje2.tonen();

	char c;
	std::cin >> c;
	return 0;
}