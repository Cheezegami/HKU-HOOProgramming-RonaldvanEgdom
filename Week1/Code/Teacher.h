#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "ScheduleApp.h"
#include "std/string.h"

class Teacher : public ScheduleApp
{
private:
	string firstName;

	std::string lastName;

	int attribute10;

	ScheduleApp scheduleApp;
	ScheduleApp Teacher;

public:
	std::string getFullName();

};
#endif
