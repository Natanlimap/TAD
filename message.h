#ifndef MESSAGE.H
#define MESSAGE.H

#include <string.h>

struct Date{
	int day;
	int month;
	int year;
}

struct Time
{
	int hour;
	int minute;
	int seconds;
};

struct Message{
	Date date;
	Time time;
	std::string message;
}




#endif