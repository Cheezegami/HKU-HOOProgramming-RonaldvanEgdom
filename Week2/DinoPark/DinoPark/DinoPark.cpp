// DinoPark.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include "Dino.h"
#include "Park.h"

int main()
{
	Park jurrasticPark = Park();
	jurrasticPark.addDinosaur(Dino("Tyranosaurus Rex"));
	jurrasticPark.addDinosaur(Dino("Stegosaurus"));
    return 0;
}

