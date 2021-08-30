#include "time.h"


Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
}

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
}

//Time Time::sum(Time& t) {
Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
}

void Time::show() {
	cout << "½Ã°£ : " << hours << endl;
	cout << "ºÐ : " << mins << endl;
}

Time::~Time()
{
}