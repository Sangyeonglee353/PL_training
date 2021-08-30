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
	// 변경된 부분
	Time operator*(int);
	void show();
	~Time();
	// 변경된 부분
	friend Time operator* (int n, Time& t) {
		return t * n;
	}

private:
	int hours;
	int mins;
};
#endif