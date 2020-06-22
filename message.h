#ifndef MESSAGE.H
#define MESSAGE.H

#include <string.h>
#include <list>

struct Message{
	std::string m_date;
	std::string m_time;
	std::string m_message;
	bool dayExists();
	bool compare_dates(const Message &_lmessage);
}

struct Diary{
	std::list<Message> m_messages;
	std::fstream m_file;
	std::string m_name;
	bool diaryExist(); 
}


#endif
