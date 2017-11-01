#include "SnelTrein.h"
#include "Trein.h"
#include "Vervoermidel.h"
#pragma once

SnelTrein::~SnelTrein()
{
}

SnelTrein::SnelTrein() {}

int SnelTrein::BerekenPrijs(int km) {
	return ((prijs + toeslag) * km) * aantalPassagiers;
}