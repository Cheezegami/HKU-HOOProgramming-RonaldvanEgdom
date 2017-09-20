#pragma once
#include "Persoon.h"
#include <string>

class Docent : public Persoon {
public:
	Docent(int, std::string, std::string, int);
	~Docent();
	int age;
	std::string name;
	std::string subject;
	int wage;
};