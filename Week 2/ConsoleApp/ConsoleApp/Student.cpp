#include "Student.h"

Student::Student(int age, std::string name, std::string schoolClass, std::string town) : Persoon(name, age)
{
	this->schoolClass = schoolClass;
	this->town = town;
}

Student::~Student()
{
}
