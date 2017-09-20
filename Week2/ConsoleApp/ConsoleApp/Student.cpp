#include "Student.h"

Student::Student(int age, std::string name, std::string schoolClass, std::string town)
{
	this->age = age;
	this->name = name;
	this->schoolClass = schoolClass;
	this->town = town;
}

Student::~Student()
{
}
