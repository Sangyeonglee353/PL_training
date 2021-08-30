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
	Time operator*(int);
	void show();
	~Time();
	friend Time operator* (int n, Time& t) {
		return t * n;
	}
	// 변경된 부분
	friend ostream& operator<<(ostream&, Time&);

private:
	int hours;
	int mins;
};
#endif