#pragma once
#include <string>
class Persoon {
public:
	Persoon();
	Persoon(std::string name, int age);
	~Persoon();
	int age;
	std::string name;

	virtual std::string getName(std::string name);
	virtual int getAge(int age);
};
