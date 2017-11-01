#pragma once
#include <string>
class Melk
{
public:
	Melk();
	Melk(std::string type);
	virtual ~Melk();
	std::string _type;
};

