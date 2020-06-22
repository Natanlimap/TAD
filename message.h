#ifndef MESSAGE.H
#define MESSAGE.H

#include <string.h>
#include <list>

struct Date
{
	int year;
	int month;
	int day;
};

struct Time
{
	int hour;
	int minute;
	int second;
};

struct Message{
	Date date;
	Time time;
	std::string message;
	bool dayExists(const Message);
	bool compare_dates(const Message &_lmessage);
}

struct Diary{
	std::list<Message> messages;
	std::fstream file;
	std::string name;
	bool diaryExist(); 
}


#endif