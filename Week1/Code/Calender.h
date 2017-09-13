#ifndef CALENDER_H
#define CALENDER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Visualise.h"

class Calender
{
private:
	int day;

	int month;

	int year;

	Visualise visualise;

private:
	int checkday();

public:
	bool isLeapYear();

	/**
	 *  
	 *  
	 */
	int daysInMonth();

	/**
	 *  
	 */
	int whatDayIsFirstOfMonth();

};
#endif
