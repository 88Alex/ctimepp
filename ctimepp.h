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
	Time(struct tm);
	Time(time_t);
	Time();
	double time_difftime(Time second);
	char* time_asctime();
	size_t time_strftime(char* ptr, size_t maxsize, const char* format);
};
