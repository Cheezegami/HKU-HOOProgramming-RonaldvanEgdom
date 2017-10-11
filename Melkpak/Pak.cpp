#include "Pak.h"
#include <string>
#include <iostream>
#include "Melk.h"
#pragma once

Pak::Pak()
{
}


Pak::~Pak()
{
	std::cout << "Pak: dtor" << std::endl;
	delete melk;
}

void Pak::vulMelk(std::string _type)
{
	melk = new Melk(_type);
}

void Pak::voegMelkToe(std::string _type) {
	melk = new Melk(_type);

}

void Pak::tonen()
{
	std::cout << "Pak: " << melk->_type << std::endl;
}

void melkBroodjes(Pak* pak, std::string _type) {
	pak->vulMelk(_type);
}