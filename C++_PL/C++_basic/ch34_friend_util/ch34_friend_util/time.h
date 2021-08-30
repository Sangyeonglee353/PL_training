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
	// ����� �κ�
	Time operator*(int);
	void show();
	~Time();
	// ����� �κ�
	friend Time operator* (int n, Time& t) {
		return t * n;
	}

private:
	int hours;
	int mins;
};
#endif