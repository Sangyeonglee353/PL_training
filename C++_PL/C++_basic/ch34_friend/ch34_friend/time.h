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
	// 변경된 부분
	friend Time operator* (int, Time&);

private:
	int hours;
	int mins;
};
#endif