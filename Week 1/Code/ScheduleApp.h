#ifndef SCHEDULE_APP_H
#define SCHEDULE_APP_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Calender.h"
#include "Lesson.h"
#include "Visualise.h"

class ScheduleApp
{
private:
	bool isLoggedIn;

	Calender calender;
	ScheduleApp scheduleApp;
	Lesson lesson;
	Visualise displaySchedule;

public:
	/**
	 *  
	 */
	int Main();

	Lesson listLessons();

	Lesson createLesson();

	Lesson deleteLesson();

};
#endif
