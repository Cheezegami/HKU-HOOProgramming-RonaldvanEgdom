#pragma once
#include "Boek.h"
#include <vector>

using namespace std;

class Bibliotheek {
	public:
		Bibliotheek();
		void toon();
		void voegToe(std::string type);
		virtual ~Bibliotheek();
		Bibliotheek(const Bibliotheek& bibliotheek);
		Bibliotheek& operator=(const Bibliotheek&);

	private:
		vector <Boek*> boek;
};