#ifndef TIMEH
#define TIMEH

#include <iostream>

using namespace std;

class Time
{
public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	//Time sum(Time&);
	Time operator+(Time&);
	void show();
	~Time();

private:
	int hours;
	int mins;
};
#endif