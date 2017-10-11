#pragma once
#include "Melk.h"
#include <string>
class Pak
{
public:
	Pak();
	virtual ~Pak();
	Pak(const Pak& anderePak);
	void vulMelk(std::string _type);
	void voegMelkToe(std::string _type);
	void tonen();

private:
	Melk* melk;
};
