#pragma once
#include "Melk.h"
#include <string>
class Pak
{
public:
	Pak();
	virtual ~Pak();
	void vulMelk(std::string _type);
	void voegMelkToe(std::string _type);
	void tonen();

private:
	Melk* melk;
};
