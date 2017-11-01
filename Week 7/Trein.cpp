#include <iostream>
#include "SnelTrein.h"
#include "Vervoermidel.h"
#include "Trein.h"
#pragma once

Trein::Trein() {}

int Trein::BerekenPrijs(int km) {
	return (prijs*km) * aantalPassagiers;
}