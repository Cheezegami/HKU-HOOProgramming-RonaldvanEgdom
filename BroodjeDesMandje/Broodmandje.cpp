#include "Broodmandje.h"
#include <iostream>
#include <string>


Broodmandje::Broodmandje()
{
}


Broodmandje::~Broodmandje()
{
}



void Broodmandje::maakBroodje(std::string _type)
{
	broodje = new Broodje(_type);
}

void Broodmandje::voegBroodToe(std::string _type) {
	broodje = new Broodje(_type);

}

void Broodmandje::tonen()
{
	std::cout << "Broodmandje " << broodje->_type << std::endl;
}

void getBroodjes(Broodmandje* mandje,std::string _type) {
	mandje->maakBroodje(_type);
}

int main() {
	// Dear Diary, Today I absolutely feel -> on point.
	Broodmandje* mandje = new Broodmandje();
	mandje->maakBroodje("Stokbrood");
	mandje->tonen();
	getBroodjes(mandje, "Pizza?");
	mandje->tonen();
	char c;
	std::cin >> c;
	return 0;
}

