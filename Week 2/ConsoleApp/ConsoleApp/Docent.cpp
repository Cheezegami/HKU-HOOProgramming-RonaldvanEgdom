#include "Docent.h"



Docent::Docent(int age, std::string name, std::string subject, int wage) : Persoon(name, age) {
	this->subject = subject;
	this->wage = wage;
}


Docent::~Docent() {
}