#include "ctimepp.h"

int Time::setyear(int year)
{
	time_.tm_year = year;
	return time_.tm_year;
}
int Time::setmon(int mon)
{
	time_.tm_mon = mon % 12;
	return time_.tm_mon;
}
int Time::setmday(int day)
{
	time_.tm_mday = day;
	return time_.tm_mday;
}
int Time::sethour(int hour)
{
	time_.tm_hour = hour % 23;
	return time_.tm_hour;
}
int Time::setmin(int min)
{
	time_.tm_min = min % 60;
	return time_.tm_min;
}
int Time::setsec(int sec)
{
	time_.tm_sec = (sec > 61) ? (sec % 60) : sec;
	return time_.tm_sec;
}
int Time::setisdst(int isdst)
{
	time_.tm_isdst = isdst;
	return time_.tm_isdst;
}

int Time::getyear()
{
	return time_.tm_year;
}
int Time::getmon()
{
	return time_.tm_mon;
}
int Time::getmday()
{
	return time_.tm_mday;
}
int Time::gethour()
{
	return time_.tm_hour;
}
int Time::getmin()
{
	return time_.tm_min;
}
int Time::getsec()
{
	return time_.tm_sec;
}
int Time::getisdst()
{
	return time_.tm_isdst;
}

Time::Time()
{
	time_t now = time(0);
	time_ = *localtime(&now);
}

Time::Time(time_t t)
{
	time_ = *localtime(&t);
}

Time::Time(struct tm t)
{
	time_ = t;
}

double Time::time_difftime(Time second)
{
	return difftime(mktime(&time_), mktime(&(second.time_) ));
}

char* Time::time_asctime()
{
	return asctime(&time_);
}

size_t Time::time_strftime(char* ptr, size_t maxsize, const char* format)
{
	return strftime(ptr, maxsize, format, &time_);
}
