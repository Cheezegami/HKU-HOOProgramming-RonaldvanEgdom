#pragma once
#include "Persoon.h"
#include <string>

class Student : public Persoon {
public:
	Student(int, std::string, std::string, std::string);
	~Student();
	int age;
	std::string name;
	std::string schoolClass;
	std::string town;
};