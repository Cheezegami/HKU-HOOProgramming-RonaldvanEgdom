#pragma once
#include "Broodje.h"
#include <iostream>
class Broodmandje
{
public:
	Broodmandje();
	~Broodmandje();

	void tonen();
	void maakBroodje(std::string _type);

	void voegBroodToe(std::string _type);

private:
	
	Broodje* broodje;
};

