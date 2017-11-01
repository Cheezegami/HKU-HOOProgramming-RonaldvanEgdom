#pragma once
#include <iostream>
#include <string>

class Boek {
	public:
		Boek(std::string type);
		std::string _type = "het boek der naamloosheid";
		Boek();
		~Boek();
};
