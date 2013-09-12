#include <ctime>

class Time
{
	private:
	struct tm time_;
	protected:
	public:
	int setyear(int year);
	int setmon(int mon);
	int setmday(int mday);
	int sethour(int hour);
	int setmin(int min);
	int setsec(int sec);
	int setwday(int wday);
	int setyday(int yday);
	int setisdst(int isdst);
	int getyear(int year);
	int getmon(int mon);
	int getmday(int mday);
	int gethour(int hour);
	int getmin(int min);
	int getsec(int sec);
	int getwday(int wday);
	int getyday(int yday);
	int getisdst(int isdst);
	Time(struct tm);
	Time(time_t);
	Time();
	double time_difftime(Time second);
	char* time_asctime();
	size_t time_strftime(char* ptr, size_t maxsize, const char* format);
};
